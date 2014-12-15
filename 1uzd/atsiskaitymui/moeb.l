/*
 * Lex failas apibrėžiantis baigtinį automatą. 
 *
 * Kursas "Transliavimo metodai" (TMET2114) 2014/2015 m. rudens semestras
 * Atliko: Žilvinas Rudžionis, Programų sistemos, 3 grupė, 118 variantas
 *
 */

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./removeCmnt.h"
%}

EQ =
SPACE [\ \s]
MORE >
INLINE_MORE \/> 
SPECIAL_INLINE_MORE \?>
LESS <
ATTR_VAL \"([^"]*)\" 
TAG_VAL [^<>]+[<]
ATTRIBUTE_IDENTIFIER [A-Za-z]*[0-9]*

    /* general tags */
TAG package|metadata|dc-metadata|manifest|item|spine|itemref|guide|reference|version|number

    /* general tag attributes */
TAG_ATTRIBUTE unique-identifier|xmlns:dc|xmlns:oebpackage|id|href|media-type|idref|type|title|version

    /* tags with dc namespace */
DC_TAG Identifier|Title|Type|Creator|Contributor

    /* attributes of tags with dc namepsace */
DC_TAG_ATTRIBUTE id|file-as|role|version
    
    /* meta values */
META (\?xml)|(\!DOCTYPE\ package\ PUBLIC)

%% 


<INITIAL>{

    {LESS} { 
        fprintf(yyout, "[LESS]\n"); 
    }

    {SPACE} {

    }

    {META} {
        fprintf(yyout, "[META: %s]\n", yytext); 
    }  

    {TAG} { 
        fprintf(yyout, "[TAG: %s]\n", yytext); 
    }

    dc:{DC_TAG} { 
        fprintf(yyout, "[DC_TAG: %s]\n", yytext); 
    }

    {TAG_ATTRIBUTE}|{DC_TAG_ATTRIBUTE}|{ATTRIBUTE_IDENTIFIER} { 
        fprintf(yyout, "[TAGATTR: %s]\n", yytext); 
    }

    {EQ} { 
        fprintf(yyout, "[EQ]\n"); 
    }

    {ATTR_VAL} { 
        fprintf(yyout, "[ATTR_VAL: %s]\n", yytext); 
    }

    \/dc:{DC_TAG} { 
        fprintf(yyout, "[CLOSE_DC_TAG: %s]\n", yytext+1); 
    }

    \/{TAG} { 
        fprintf(yyout, "[CLOSE_DC_TAG: %s]\n", yytext+1); 
    }

    {SPECIAL_INLINE_MORE} { 
         fprintf(yyout, "[SPECIAL_INLINE_MORE]\n"); 
    }

    {INLINE_MORE} { 
        fprintf(yyout, "[INLINE_MORE]\n"); 
    }

    {MORE} { 
        fprintf(yyout, "[MORE]\n"); 
    }

    {TAG_VAL} {
        yytext[yyleng-1] = '\0';
        char* tagValueWithoutComments = removeComments(yytext);
        fprintf(yyout, "[TAG_VAL: %s]\n", tagValueWithoutComments);
        unput('<');
    }
}

%%
