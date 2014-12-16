#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "analyzer.y"

#include <stdio.h>
#define YYDEBUG 1

extern char* yytext;
extern int   yylineno;

void yyerror(char*);

#line 29 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define XML_DESC 257
#define DOCTYPE 258
#define PACKAGE 259
#define TAG_NAME 260
#define ATTR_NAME 261
#define LESS 262
#define MORE 263
#define EQ 264
#define QUOTE 265
#define CLOSE 266
#define INLINE_MORE 267
#define TAG_VALUE 268
#define ATTR_VALUE 269
#define PACKAGE_TAG 270
#define PACKAGE_ATTRIBUTE_NAME 271
#define METADATA_TAG 272
#define DC_METADATA_TAG 273
#define DC_METADATA_ATTRIBUTE_NAME 274
#define DC_IDENTIFIER_TAG 275
#define DC_IDENTIFIER_ATTRIBUTE_NAME 276
#define DC_TITLE_TAG 277
#define DC_TYPE_TAG 278
#define DC_CREATOR_TAG 279
#define DC_CREATOR_ATTRIBUTE_NAME 280
#define MANIFEST_TAG 281
#define ITEM_TAG 282
#define ITEM_ATTRIBUTE_NAME 283
#define SPINE_TAG 284
#define ITEMREF_TAG 285
#define ITEMREF_ATTRIBUTE_NAME 286
#define GUIDE_TAG 287
#define REFERENCE_TAG 288
#define REFERENCE_ATTRIBUTE_NAME 289
#define ID_ATTRIBUTE_NAME 290
#define HREF_ATTRIBUTE_NAME 291
#define VAR_NAME 292
#define VARS_TAG 293
#define EXPRESSION_TAG 294
#define VAR_TAG 295
#define NAME_ATTRIBUTE_NAME 296
#define VALUE_ATTRIBUTE_NAME 297
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    9,    7,   11,   13,   12,   12,    8,
    8,    3,   16,   17,   18,   19,   20,   25,   21,   26,
   27,   28,   22,   29,   30,   31,   23,   32,   33,   34,
   24,   24,   35,   36,   37,   38,    4,   39,   41,   40,
   40,   42,   42,   43,   44,   44,   46,   45,    5,   47,
   49,   48,   48,   50,    6,   51,   53,   52,   52,   54,
   55,   55,   56,   56,   14,   15,   10,
};
static const short yylen[] = {                            2,
    3,    8,    5,    4,    3,    3,    4,    2,    0,    2,
    0,    3,    3,    1,    4,    6,    7,    4,    3,    5,
    1,    4,    3,    3,    1,    4,    3,    3,    1,    4,
    2,    0,    3,    5,    1,    4,    3,    3,    4,    2,
    0,    3,    5,    4,    2,    0,    2,    1,    3,    3,
    4,    2,    0,    5,    3,    3,    4,    2,    0,    4,
    2,    0,    2,    2,    7,    1,    4,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    1,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   41,    0,    0,   14,    0,    0,
    0,   13,    0,    0,    0,   53,    0,    0,    0,   12,
    0,    0,    0,    0,    3,   38,    0,    0,    0,   59,
    0,    0,   37,   40,    0,    0,    0,    0,    0,    0,
    0,   21,    0,    0,   50,    0,    0,   11,    9,    0,
    0,   49,   52,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   32,    0,   25,    0,    0,   19,   67,   56,
    0,    0,    0,    0,   55,   58,    0,    0,    0,    0,
   46,   48,    0,   42,   45,    0,   15,    0,   24,    0,
    0,   29,    0,    0,   23,    0,    6,    0,   66,    2,
   10,    0,    5,    8,    0,   62,    0,    0,   39,   44,
    0,   47,    0,   20,   28,    0,   16,   31,    0,    0,
   27,    0,    0,    0,    0,    0,    0,    0,   51,    0,
   43,   17,    0,    0,   35,    0,    0,    0,   22,    0,
    0,    0,   57,   60,    0,    0,   61,   54,    0,    0,
    0,   33,    0,   26,    4,    7,    0,   63,   64,   18,
    0,    0,   30,    0,   34,    0,    0,   36,   65,
};
static const short yydgoto[] = {                          2,
    5,    6,    9,   14,   25,   39,   58,   82,  110,   21,
   59,   83,  113,  114,  111,   10,   17,   30,   18,   19,
   32,   50,   73,  101,  127,   33,   53,   78,   51,   76,
  105,   74,  103,  131,  128,  129,  146,  162,   15,   27,
   43,   44,   45,   67,   94,   95,   26,   41,   62,   63,
   40,   60,   85,   86,  138,  157,
};
static const short yysindex[] = {                      -254,
 -250,    0, -252, -258,    0, -249, -256, -240, -246, -245,
 -241, -244, -247, -227,    0, -237, -225,    0, -224, -226,
 -223,    0, -222, -266, -220,    0, -219, -229, -218,    0,
 -221, -216, -217, -214,    0,    0, -211, -238, -209,    0,
 -206, -255,    0,    0, -234, -241, -213, -232, -215, -202,
 -207,    0, -199, -201,    0, -198, -212,    0,    0, -196,
 -260,    0,    0, -210, -208, -241, -262, -205, -195, -241,
 -193, -204,    0, -192,    0, -189, -191,    0,    0,    0,
 -186, -261, -184, -259,    0,    0, -200, -203, -183, -241,
    0,    0, -241,    0,    0, -241,    0, -178,    0, -177,
 -175,    0, -174, -187,    0, -185,    0, -173,    0,    0,
    0, -264,    0,    0, -190,    0, -172, -241,    0,    0,
 -262,    0, -171,    0,    0, -257,    0,    0, -179, -170,
    0, -182, -169, -168, -194, -188, -165, -263,    0, -167,
    0,    0, -166, -176,    0, -161, -163, -160,    0, -158,
 -152, -241,    0,    0, -241, -241,    0,    0, -151, -241,
 -153,    0, -147,    0,    0,    0, -230,    0,    0,    0,
 -146, -159,    0, -241,    0, -145, -148,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -253,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -46,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   30,    1,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 128
static const short yytable[] = {                         68,
  108,  135,    1,  154,   92,   87,  115,    3,  143,    4,
   64,    7,    8,   46,   11,   13,   16,   37,   22,   91,
   93,  144,   20,   98,   88,  155,   65,  156,  116,   46,
  136,   12,  109,   23,   24,   28,   29,   31,   34,   35,
   36,   38,   42,  120,   46,   49,  122,   47,   56,  123,
   52,   55,   57,   48,   54,   61,   66,   70,   69,   72,
   75,   71,   77,   79,   80,   84,  174,   97,   96,   99,
   89,  140,  104,  100,  106,  102,  107,  112,  132,  119,
   81,   90,  118,  117,  124,  125,  126,  130,  145,  133,
  139,  142,  134,  149,  148,  147,  137,  153,  151,  158,
  161,  150,  164,  160,  165,  167,  159,  152,  168,  169,
  166,  170,  172,  171,  163,  173,  175,  178,  179,  176,
  121,  141,    0,    0,    0,    0,    0,  177,
};
static const short yycheck[] = {                         46,
  262,  266,  257,  267,  267,  266,  266,  258,  266,  262,
  266,  270,  262,  267,  271,  262,  262,  284,  263,   66,
  283,  279,  264,   70,  285,  289,  282,  291,  288,  283,
  295,  272,  294,  281,  262,  273,  262,  262,  265,  263,
  263,  262,  262,   90,  274,  262,   93,  266,  287,   96,
  268,  263,  262,  275,  269,  262,  291,  290,  272,  262,
  268,  277,  262,  265,  263,  262,  297,  263,  274,  263,
  281,  118,  262,  278,  266,  268,  263,  262,  266,  263,
  293,  290,  286,  284,  263,  263,  262,  262,  268,  275,
  263,  263,  266,  263,  277,  266,  287,  263,  293,  267,
  262,  270,  263,  280,  263,  152,  273,  296,  155,  156,
  263,  263,  266,  160,  278,  263,  263,  263,  267,  279,
   91,  121,   -1,   -1,   -1,   -1,   -1,  174,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 297
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"XML_DESC","DOCTYPE","PACKAGE",
"TAG_NAME","ATTR_NAME","LESS","MORE","EQ","QUOTE","CLOSE","INLINE_MORE",
"TAG_VALUE","ATTR_VALUE","PACKAGE_TAG","PACKAGE_ATTRIBUTE_NAME","METADATA_TAG",
"DC_METADATA_TAG","DC_METADATA_ATTRIBUTE_NAME","DC_IDENTIFIER_TAG",
"DC_IDENTIFIER_ATTRIBUTE_NAME","DC_TITLE_TAG","DC_TYPE_TAG","DC_CREATOR_TAG",
"DC_CREATOR_ATTRIBUTE_NAME","MANIFEST_TAG","ITEM_TAG","ITEM_ATTRIBUTE_NAME",
"SPINE_TAG","ITEMREF_TAG","ITEMREF_ATTRIBUTE_NAME","GUIDE_TAG","REFERENCE_TAG",
"REFERENCE_ATTRIBUTE_NAME","ID_ATTRIBUTE_NAME","HREF_ATTRIBUTE_NAME","VAR_NAME",
"VARS_TAG","EXPRESSION_TAG","VAR_TAG","NAME_ATTRIBUTE_NAME",
"VALUE_ATTRIBUTE_NAME","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : root",
"root : XML_DESC DOCTYPE package",
"package : packageStart metadata manifest spine guide vars expressions packageEnd",
"packageStart : LESS PACKAGE_TAG PACKAGE_ATTRIBUTE_NAME attrVal MORE",
"packageEnd : LESS CLOSE PACKAGE_TAG MORE",
"vars : varsStart varList varsEnd",
"varsStart : LESS VARS_TAG MORE",
"varsEnd : LESS CLOSE VARS_TAG MORE",
"varList : varList var",
"varList :",
"expressions : expressions expression",
"expressions :",
"metadata : metadataStart metadataBody metadataEnd",
"metadataStart : LESS METADATA_TAG MORE",
"metadataBody : dcMetadata",
"metadataEnd : LESS CLOSE METADATA_TAG MORE",
"dcMetadata : dcMetadataStart dcMetadataIdentifier dcMetadataTitle dcMetadataType dcMetadataCreators dcMetadataEnd",
"dcMetadataStart : LESS DC_METADATA_TAG DC_METADATA_ATTRIBUTE_NAME attrVal DC_METADATA_ATTRIBUTE_NAME attrVal MORE",
"dcMetadataEnd : LESS CLOSE DC_METADATA_TAG MORE",
"dcMetadataIdentifier : dcMetadataIdentifierStart dcMetadataIdentifierBody dcMetadataIdentifierEnd",
"dcMetadataIdentifierStart : LESS DC_IDENTIFIER_TAG ID_ATTRIBUTE_NAME attrVal MORE",
"dcMetadataIdentifierBody : TAG_VALUE",
"dcMetadataIdentifierEnd : LESS CLOSE DC_IDENTIFIER_TAG MORE",
"dcMetadataTitle : dcMetadataTitleStart dcMetadataTitleBody dcMetadataTitleEnd",
"dcMetadataTitleStart : LESS DC_TITLE_TAG MORE",
"dcMetadataTitleBody : TAG_VALUE",
"dcMetadataTitleEnd : LESS CLOSE DC_TITLE_TAG MORE",
"dcMetadataType : dcMetadataTypeStart dcMetadataTypeBody dcMetadataTypeEnd",
"dcMetadataTypeStart : LESS DC_TYPE_TAG MORE",
"dcMetadataTypeBody : TAG_VALUE",
"dcMetadataTypeEnd : LESS CLOSE DC_TYPE_TAG MORE",
"dcMetadataCreators : dcMetadataCreators dcMetadataCreator",
"dcMetadataCreators :",
"dcMetadataCreator : dcMetadataCreatorStart dcMetadataCreatorBody dcMetadataCreatorEnd",
"dcMetadataCreatorStart : LESS DC_CREATOR_TAG DC_CREATOR_ATTRIBUTE_NAME attrVal MORE",
"dcMetadataCreatorBody : TAG_VALUE",
"dcMetadataCreatorEnd : LESS CLOSE DC_CREATOR_TAG MORE",
"manifest : manifestStart items manifestEnd",
"manifestStart : LESS MANIFEST_TAG MORE",
"manifestEnd : LESS CLOSE MANIFEST_TAG MORE",
"items : items item",
"items :",
"item : itemStart itemAttributes itemEnd",
"item : itemStart HREF_ATTRIBUTE_NAME attrVal itemAttributes itemEnd",
"itemStart : LESS ITEM_TAG ID_ATTRIBUTE_NAME attrVal",
"itemAttributes : itemAttributes itemAttribute",
"itemAttributes :",
"itemAttribute : ITEM_ATTRIBUTE_NAME attrVal",
"itemEnd : INLINE_MORE",
"spine : spineStart itemrefs spineEnd",
"spineStart : LESS SPINE_TAG MORE",
"spineEnd : LESS CLOSE SPINE_TAG MORE",
"itemrefs : itemrefs itemref",
"itemrefs :",
"itemref : LESS ITEMREF_TAG ITEMREF_ATTRIBUTE_NAME attrVal INLINE_MORE",
"guide : guideStart references guideEnd",
"guideStart : LESS GUIDE_TAG MORE",
"guideEnd : LESS CLOSE GUIDE_TAG MORE",
"references : references reference",
"references :",
"reference : LESS REFERENCE_TAG referenceAttributes INLINE_MORE",
"referenceAttributes : referenceAttributes referenceAttribute",
"referenceAttributes :",
"referenceAttribute : REFERENCE_ATTRIBUTE_NAME attrVal",
"referenceAttribute : HREF_ATTRIBUTE_NAME attrVal",
"var : LESS VAR_TAG NAME_ATTRIBUTE_NAME attrVal VALUE_ATTRIBUTE_NAME attrVal INLINE_MORE",
"expression : EXPRESSION_TAG",
"attrVal : EQ QUOTE ATTR_VALUE QUOTE",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 168 "analyzer.y"



void yyerror(char* error) {
    printf("Error {%d}: %s; Data: %s\n", yylineno, error, yytext);
}

int main() {
    return yyparse();
}
#line 375 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
