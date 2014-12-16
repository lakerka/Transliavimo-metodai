%{

#include <stdio.h>
#define YYDEBUG 1

extern char* yytext;
extern int   yylineno;

void yyerror(char*);

%}

%start root

%token TAG_NAME ATTR_NAME
%token LESS MORE EQ QUOTE CLOSE

%token TAG_VALUE
%token ATTR_VALUE

/*package related*/
%token PACKAGE_TAG PACKAGE_ATTRIBUTE_NAME METADATA_TAG

/*dc-metadata related*/
%token DC_METADATA_TAG DC_METADATA_ATTRIBUTE_NAME

/*dc-metadata related*/
%token DC_CREATOR_TAG DC_CREATOR_ATTRIBUTE_NAME


%token ID_ATTRIBUTE_NAME 

%expect 7

%%

root: dcMetadata

dcMetadata: dcMetadataStart dcMetadataCreatorBody dcMetadataEnd ;
dcMetadataStart: LESS DC_METADATA_TAG DC_METADATA_ATTRIBUTE_NAME attrVal DC_METADATA_ATTRIBUTE_NAME attrVal MORE ;
dcMetadataBody: dcMetadataCreators ;
dcMetadataEnd: LESS CLOSE DC_METADATA_TAG MORE ;


dcMetadataCreators: dcMetadataCreator ;
/*dcMetadataCreators: dcMetadataCreators dcMetadataCreator*/
                  /*|*/
                  /*;*/

dcMetadataCreator: dcMetadataCreatorStart dcMetadataCreatorBody dcMetadataCreatorEnd ;
dcMetadataCreatorStart: LESS DC_CREATOR_TAG DC_CREATOR_ATTRIBUTE_NAME attrVal MORE ;
dcMetadataCreatorBody: TAG_VALUE ;
dcMetadataCreatorEnd: LESS CLOSE DC_CREATOR_TAG MORE ;

attrVal: EQ QUOTE ATTR_VALUE QUOTE ;

%%

void yyerror(char* error) {
    printf("Error {%d}: %s; Data: %s\n", yylineno, error, yytext);
}

int main() {
    return yyparse();
}
