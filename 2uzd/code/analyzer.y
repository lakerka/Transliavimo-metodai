%{

#include <stdio.h>
#define YYDEBUG 1

extern char* yytext;
extern int   yylineno;

void yyerror(char*);

%}

%start root

%token ATTR 
%token LESS MORE EQ QUOTE

%token XML_VERSION_OPEN XML_VERSION_CLOSE

%token TAG_VALUE
%token ATTR_VALUE

%%

root: xmlVersion;

xmlVersion: LESS attr MORE;

attr: ATTR attrVal;
attrVal: EQ QUOTE ATTR_VALUE QUOTE;

%%

void yyerror(char* error) {
    printf("Error {%d}: %s; Data: %s\n", yylineno, error, yytext);
}

int main() {
    return yyparse();
}
