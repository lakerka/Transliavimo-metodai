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
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    3,    4,    6,   10,   11,   12,   13,
   14,   19,   15,   20,   21,   22,   16,   23,   24,   25,
   17,   26,   27,   28,   18,   18,   29,   30,   31,   32,
    7,   33,   35,   34,   34,   36,   36,   37,   38,   38,
   40,   39,    8,   41,   43,   42,   42,   44,    9,   45,
   47,   46,   46,   48,   49,   49,   50,   50,    5,
};
static const short yylen[] = {                            2,
    3,    3,    5,    4,    4,    3,    3,    1,    4,    6,
    7,    4,    3,    5,    1,    4,    3,    3,    1,    4,
    3,    3,    1,    4,    2,    0,    3,    5,    1,    4,
    3,    3,    4,    2,    0,    3,    5,    4,    2,    0,
    2,    1,    3,    3,    4,    2,    0,    5,    3,    3,
    4,    2,    0,    4,    2,    0,    2,    2,    4,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    1,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    2,    0,    0,   35,    0,    0,
    8,    0,    0,    0,    7,    0,    0,    0,    0,   47,
    0,    0,    0,    6,    0,    0,    0,    0,    3,    0,
   32,    0,    0,    4,   53,    0,    0,   31,   34,    0,
    0,    0,    0,    0,    0,    0,   15,    0,    0,    5,
   44,    0,    0,    0,   43,   46,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   26,    0,   19,    0,    0,
   13,   59,   50,    0,   49,   52,    0,    0,    0,    0,
   40,   42,    0,   36,   39,    0,    9,    0,   18,    0,
    0,   23,    0,    0,   17,    0,    0,   56,    0,    0,
   33,   38,    0,   41,    0,   14,   22,    0,   10,   25,
    0,    0,   21,    0,    0,    0,    0,   45,    0,   37,
   11,    0,    0,   29,    0,    0,    0,   16,   51,   54,
    0,    0,   55,   48,    0,    0,    0,   27,    0,   20,
   57,   58,   12,    0,    0,   24,   28,    0,   30,
};
static const short yydgoto[] = {                          2,
    5,    6,    9,   15,   24,   10,   17,   29,   44,   11,
   20,   34,   21,   22,   36,   55,   76,  101,  119,   37,
   58,   81,   56,   79,  105,   77,  103,  123,  120,  121,
  135,  148,   18,   31,   48,   49,   50,   70,   94,   95,
   30,   46,   65,   66,   45,   63,   85,   86,  127,  143,
};
static const short yysindex[] = {                      -253,
 -252,    0, -254, -261,    0, -250, -258, -255, -248, -246,
 -242, -235, -233, -234,    0, -271, -231,    0, -240, -228,
    0, -227, -229, -226,    0, -232, -223, -243, -219,    0,
 -218, -225, -220,    0, -224, -215, -216, -221,    0, -213,
    0, -210, -230,    0,    0, -208, -263,    0,    0, -236,
 -235, -214, -222, -217, -206, -207,    0, -200, -202,    0,
    0, -199, -197, -259,    0,    0, -212, -211, -235, -262,
 -204, -196, -235, -192, -205,    0, -194,    0, -190, -191,
    0,    0,    0, -264,    0,    0, -203, -209, -187, -235,
    0,    0, -235,    0,    0, -235,    0, -185,    0, -183,
 -180,    0, -179, -182,    0, -189, -198,    0, -178, -235,
    0,    0, -262,    0, -176,    0,    0, -251,    0,    0,
 -175, -174,    0, -181, -169, -166, -266,    0, -201,    0,
    0, -173, -177,    0, -164, -172, -162,    0,    0,    0,
 -235, -235,    0,    0, -161, -235, -167,    0, -159,    0,
    0,    0,    0, -158, -171,    0,    0, -156,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -256,
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
    0,    0,    0,    0,  -51,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   -3,   -4,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 109
static const short yytable[] = {                         71,
  140,  107,   67,    1,   92,    3,   87,    4,    7,   27,
   40,    8,   12,   14,  132,   16,   13,   91,   68,   19,
   93,   98,  141,  108,  142,   88,   40,  133,   23,   25,
   28,   26,   32,   33,   35,   38,   39,   40,  112,   41,
   42,  114,   43,   47,  115,   52,   54,   59,   51,   60,
   53,   57,   61,   64,   69,   75,   62,   72,  129,   74,
   78,   80,   82,   83,   84,  144,   97,   73,   89,   96,
   99,  104,  100,  102,  106,  111,  110,  116,   90,  117,
  109,  118,  122,  124,  128,  125,  131,  113,  126,  151,
  152,  136,  134,  138,  154,  137,  139,  147,  155,  145,
  150,  153,  146,  156,  157,  149,  159,  158,  130,
};
static const short yycheck[] = {                         51,
  267,  266,  266,  257,  267,  258,  266,  262,  270,  281,
  267,  262,  271,  262,  266,  262,  272,   69,  282,  262,
  283,   73,  289,  288,  291,  285,  283,  279,  264,  263,
  262,  266,  273,  262,  262,  265,  263,  270,   90,  263,
  284,   93,  262,  262,   96,  266,  262,  269,  274,  263,
  275,  268,  263,  262,  291,  262,  287,  272,  110,  277,
  268,  262,  265,  263,  262,  267,  263,  290,  281,  274,
  263,  262,  278,  268,  266,  263,  286,  263,  290,  263,
  284,  262,  262,  266,  263,  275,  263,   91,  287,  141,
  142,  266,  268,  263,  146,  277,  263,  262,  266,  273,
  263,  263,  280,  263,  263,  278,  263,  279,  113,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 291
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
"REFERENCE_ATTRIBUTE_NAME","ID_ATTRIBUTE_NAME","HREF_ATTRIBUTE_NAME",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : root",
"root : XML_DESC DOCTYPE package",
"package : packageStart packageBody packageEnd",
"packageStart : LESS PACKAGE_TAG PACKAGE_ATTRIBUTE_NAME attrVal MORE",
"packageBody : metadata manifest spine guide",
"packageEnd : LESS CLOSE PACKAGE_TAG MORE",
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
#line 142 "analyzer.y"

void yyerror(char* error) {
    printf("Error {%d}: %s; Data: %s\n", yylineno, error, yytext);
}

int main() {
    return yyparse();
}
#line 344 "y.tab.c"

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
