/*
 * Lex failas apibrėžiantis baigtinį automatą. 
 *
 * Kursas "Transliavimo metodai" (TMET2114) 2014/2015 m. rudens semestras
 * Atliko: Žilvinas Rudžionis, Programų sistemos, 3 grupė, 118 variantas
 *
 */

%option noyywrap
%option yylineno

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "./removeCmnt.h"

%}

%s TAG ATTRIBUTE ATTRIBUTE_VAL

SPACE [\ \s]
INLINE_MORE \/> 
TAG_VAL [^<>]+[<]
ATTRIBUTE_IDENTIFIER [A-Za-z]+[0-9]*

    /* general tags */
TAG package|metadata|dc-metadata|manifest|item|spine|itemref|guide|reference|version|number

    /* general tag attributes */
TAG_ATTRIBUTE xml\ version|unique-identifier|xmlns:dc|xmlns:oebpackage|id|href|media-type|idref|type|title|version

    /* tags with dc namespace */
DC_TAG Identifier|Title|Type|Creator|Contributor

    /* attributes of tags with dc namepsace */
DC_TAG_ATTRIBUTE id|file-as|role|version
    
    /* meta values */
/*META \!DOCTYPE\ package\ PUBLIC*/

%% 


<INITIAL>{

    {SPACE} {}

    \<\? {
        fprintf(stderr, "[<?]\n"); 
        BEGIN ATTRIBUTE;
        return LESS;
    }


    \?> {
        fprintf(stderr, "[?>]\n"); 
        return MORE;
    }

    > { 
        fprintf(stderr, "[MORE]\n"); 
        return MORE;
    }
}


<TAG>{

}

<ATTRIBUTE>{

    = { 
        fprintf(stderr, "[EQ]\n"); 
        return EQ;
    }

    \" { 
        fprintf(stderr, "[ATTRIBUTE QUOTE]\n"); 
        BEGIN ATTRIBUTE_VAL;
        return QUOTE;
    }

    xml\ version {
        fprintf(stderr, "[xml version]\n"); 
        return ATTR;    
    }

    . {
        unput(yytext[yyleng-1]);
        BEGIN INITIAL;
    }
}

<ATTRIBUTE_VAL>{

    \" { 
        fprintf(stderr, "[ATTRIBUTE_VAL QUOTE]\n"); 
        BEGIN ATTRIBUTE;
        return QUOTE;
    }
    
    [^"]* {
        fprintf(stderr, "[ATTR_VALUE:%s]\n", yytext); 
        return ATTR_VALUE;
    }
}


%%
