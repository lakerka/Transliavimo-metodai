%{

#include <stdio.h>
#define YYDEBUG 1

extern char* yytext;
extern int   yylineno;

void yyerror(char*);

%}

%start root

%token XML_DESC DOCTYPE PACKAGE 

%token TAG_NAME ATTR_NAME
%token LESS MORE EQ QUOTE CLOSE INLINE_MORE

%token TAG_VALUE
%token ATTR_VALUE

%token PACKAGE_TAG PACKAGE_ATTRIBUTE_NAME
%token METADATA_TAG

%token DC_METADATA_TAG DC_METADATA_ATTRIBUTE_NAME

%token DC_IDENTIFIER_TAG DC_IDENTIFIER_ATTRIBUTE_NAME
%token DC_TITLE_TAG
%token DC_TYPE_TAG
%token DC_CREATOR_TAG DC_CREATOR_ATTRIBUTE_NAME

%token MANIFEST_TAG ITEM_TAG ITEM_ATTRIBUTE_NAME
%token ITEM_TAG ITEM_ATTRIBUTE_NAME 
%token SPINE_TAG
%token ITEMREF_TAG ITEMREF_ATTRIBUTE_NAME 
%token GUIDE_TAG
%token REFERENCE_TAG REFERENCE_ATTRIBUTE_NAME

%token ID_ATTRIBUTE_NAME 
%token HREF_ATTRIBUTE_NAME 

%%

root: XML_DESC DOCTYPE package;
    
/*package*/
package: packageStart packageBody packageEnd ;
packageStart: LESS PACKAGE_TAG PACKAGE_ATTRIBUTE_NAME attrVal MORE ;
packageBody: metadata manifest spine guide;
packageEnd: LESS CLOSE PACKAGE_TAG MORE ;

/*metadata*/
metadata: metadataStart metadataBody metadataEnd ;
metadataStart: LESS METADATA_TAG MORE ;
metadataBody: dcMetadata ;
metadataEnd: LESS CLOSE METADATA_TAG MORE ;

/*dc-metadata*/
dcMetadata: dcMetadataStart dcMetadataIdentifier dcMetadataTitle dcMetadataType dcMetadataCreators dcMetadataEnd ;
dcMetadataStart: LESS DC_METADATA_TAG DC_METADATA_ATTRIBUTE_NAME attrVal DC_METADATA_ATTRIBUTE_NAME attrVal MORE ;
dcMetadataEnd: LESS CLOSE DC_METADATA_TAG MORE ;

/*dc:Identifier*/
dcMetadataIdentifier: dcMetadataIdentifierStart dcMetadataIdentifierBody dcMetadataIdentifierEnd ;
dcMetadataIdentifierStart: LESS DC_IDENTIFIER_TAG ID_ATTRIBUTE_NAME attrVal MORE  ;
dcMetadataIdentifierBody: TAG_VALUE ;
dcMetadataIdentifierEnd: LESS CLOSE DC_IDENTIFIER_TAG MORE ;

/*dc:Title*/
dcMetadataTitle: dcMetadataTitleStart dcMetadataTitleBody dcMetadataTitleEnd ;
dcMetadataTitleStart: LESS DC_TITLE_TAG MORE  ;
dcMetadataTitleBody: TAG_VALUE ;
dcMetadataTitleEnd: LESS CLOSE DC_TITLE_TAG MORE ;

/*dc:Type*/
dcMetadataType: dcMetadataTypeStart dcMetadataTypeBody dcMetadataTypeEnd ;
dcMetadataTypeStart: LESS DC_TYPE_TAG MORE  ;
dcMetadataTypeBody: TAG_VALUE ;
dcMetadataTypeEnd: LESS CLOSE DC_TYPE_TAG MORE ;


dcMetadataCreators: dcMetadataCreators dcMetadataCreator
                  |
                  ;

/*dc:Creator*/
dcMetadataCreator: dcMetadataCreatorStart dcMetadataCreatorBody dcMetadataCreatorEnd ;
dcMetadataCreatorStart: LESS DC_CREATOR_TAG DC_CREATOR_ATTRIBUTE_NAME attrVal MORE ;
dcMetadataCreatorBody: TAG_VALUE ;
dcMetadataCreatorEnd: LESS CLOSE DC_CREATOR_TAG MORE ;

/*Manifest*/
manifest: manifestStart items manifestEnd ;
manifestStart: LESS MANIFEST_TAG MORE ;
manifestEnd: LESS CLOSE MANIFEST_TAG MORE ;
items: items item
     |
     ;

/*Item*/
item: itemStart itemAttributes itemEnd
    | itemStart HREF_ATTRIBUTE_NAME attrVal itemAttributes itemEnd
    ;
itemStart: LESS ITEM_TAG ID_ATTRIBUTE_NAME attrVal ;
itemAttributes: itemAttributes itemAttribute
              |
              ;
itemAttribute: ITEM_ATTRIBUTE_NAME attrVal ;
itemEnd: INLINE_MORE ;

/*Spine*/
spine: spineStart itemrefs spineEnd ;
spineStart: LESS SPINE_TAG MORE ;
spineEnd: LESS CLOSE SPINE_TAG MORE ;
itemrefs: itemrefs itemref
        |
        ;

/*itemref*/
itemref: LESS ITEMREF_TAG ITEMREF_ATTRIBUTE_NAME attrVal INLINE_MORE ;

/*Guide*/
guide: guideStart references guideEnd ;
guideStart: LESS GUIDE_TAG MORE ;
guideEnd: LESS CLOSE GUIDE_TAG MORE ;
references: references reference
          |
          ;

/*Reference*/
reference: LESS REFERENCE_TAG referenceAttributes INLINE_MORE ;
referenceAttributes: referenceAttributes referenceAttribute 
                   |
                   ;
referenceAttribute: REFERENCE_ATTRIBUTE_NAME attrVal
                  | HREF_ATTRIBUTE_NAME attrVal
                  ;

attrVal: EQ QUOTE ATTR_VALUE QUOTE ;

%%

void yyerror(char* error) {
    printf("Error {%d}: %s; Data: %s\n", yylineno, error, yytext);
}

int main() {
    return yyparse();
}
