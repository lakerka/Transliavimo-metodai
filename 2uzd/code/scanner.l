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

%s TAG ATTRIBUTE ATTRIBUTE_VAL TAG_VAL

blank \ |\n|\r\n|\t
quoted \"[^\"]*\"
quote \"
less \<
more >
inlineMore \/>
close \/
eq =
dc dc:

%% 


<INITIAL>{

    {blank} {}
    
    . {
        unput(yytext[yyleng-1]);
        BEGIN TAG;
    }

}


<TAG>{
    
    {less}\?xml\ version={quoted}\ \?{more} {
        fprintf(stderr, "[TAG:XML_DESC:%s]\n", yytext); 
        return XML_DESC; 
    }

    {less}\!DOCTYPE\ package\ PUBLIC\ {quoted}\ {quoted}{more} {
        fprintf(stderr, "[TAG:DOCTYPE:%s]\n", yytext); 
        return DOCTYPE; 
    }

    {less} {
        fprintf(stderr, "[TAG:LESS:%s]\n", yytext); 
        return LESS;
    }

    {close} {
        fprintf(stderr, "[TAG:CLOSE:%s]\n", yytext); 
        return CLOSE;
    }

    {more} {
        fprintf(stderr, "[TAG:MORE:%s]\n", yytext); 
        return MORE;
    }

    {inlineMore} {
        fprintf(stderr, "[TAG:INLINE_MORE:%s]\n", yytext); 
        return INLINE_MORE;
    }

    package {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return PACKAGE_TAG; 
    }

    metadata {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        return METADATA_TAG; 
    }

    dc-metadata {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return DC_METADATA_TAG; 
    }

    {dc}Identifier {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return DC_IDENTIFIER_TAG; 
    }

    {dc}Title {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return DC_TITLE_TAG; 
    }

    {dc}Type {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return DC_TYPE_TAG; 
    }

    {dc}Creator {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return DC_CREATOR_TAG; 
    }

    manifest {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return MANIFEST_TAG; 
    }

    item {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return ITEM_TAG; 
    }

    spine {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        return SPINE_TAG; 
    }

    itemref {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return ITEMREF_TAG; 
    }

    guide {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        return GUIDE_TAG; 
    }

    reference {
        fprintf(stderr, "[TAG:TAG:%s]\n", yytext); 
        BEGIN ATTRIBUTE;
        return REFERENCE_TAG; 
    }
}

<TAG_VAL>{

    \< {
        fprintf(stderr, "[TAG_VAL:LESS:%s]\n", yytext); 
        BEGIN INITIAL;
        return LESS;
    }

    [^<]* {
        fprintf(stderr, "[TAG_VAL:TAG_VALUE:%s]\n", yytext); 
        /*int i = 0;*/
        /*for(i = 0; i < 8; i++) {*/
            /*fprintf(stderr, "[TAG_VAL:CHAR:%c]\n", input()); */
        /*}*/
        return TAG_VALUE;
    }
}

<ATTRIBUTE>{

    {blank} {}

    {more}{blank}* { 
        fprintf(stderr, "[ATTRIBUTE:MORE:%s]\n", yytext); 
        BEGIN TAG_VAL;
        return MORE;
    }

    {eq} { 
        fprintf(stderr, "[ATTRIBUTE:EQ]\n"); 
        return EQ;
    }

    {quote} { 
        fprintf(stderr, "[ATTRIBUTE:ATTR:QUOTE]\n"); 
        BEGIN ATTRIBUTE_VAL;
        return QUOTE;
    }

    unique-identifier {
        fprintf(stderr, "[ATTRIBUTE:PACKAGE_ATTR:%s]\n", yytext); 
        return PACKAGE_ATTRIBUTE_NAME;
    }

    xmlns:dc|xmlns:oebpackage {
        fprintf(stderr, "[ATTRIBUTE:DC_METADA_ATTR:%s]\n", yytext); 
        return DC_METADATA_ATTRIBUTE_NAME;
    }

    id {
        fprintf(stderr, "[ATTRIBUTE:ID:%s]\n", yytext); 
        return ID_ATTRIBUTE_NAME;
    }

    href {
        fprintf(stderr, "[ATTRIBUTE:HREF:%s]\n", yytext); 
        return HREF_ATTRIBUTE_NAME;
    }

    file-as|role { 
        fprintf(stderr, "[ATTRIBUTE:CREATOR:%s]\n", yytext); 
        return DC_CREATOR_ATTRIBUTE_NAME;
    }

    media-type { 
        fprintf(stderr, "[ATTRIBUTE:ITEM:%s]\n", yytext); 
        return ITEM_ATTRIBUTE_NAME;
    }

    idref { 
        fprintf(stderr, "[ATTRIBUTE:ITEMREF:%s]\n", yytext); 
        return ITEMREF_ATTRIBUTE_NAME;
    }

    type|title { 
        fprintf(stderr, "[ATTRIBUTE:REFERENCE:%s]\n", yytext); 
        return REFERENCE_ATTRIBUTE_NAME;
    }

    . {
        unput(yytext[yyleng-1]);
        BEGIN INITIAL;
    }
}

<ATTRIBUTE_VAL>{

    {quote} { 
        fprintf(stderr, "[ATTRIBUTE_VAL:QUOTE]\n"); 
        BEGIN ATTRIBUTE;
        return QUOTE;
    }
    
    [^"]* {
        fprintf(stderr, "[ATTR_VALUE:%s]\n", yytext); 
        return ATTR_VALUE;
    }
}

%%
