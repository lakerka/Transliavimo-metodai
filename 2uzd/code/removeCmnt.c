#include "removeCmnt.h"

char* stradd(const char* a, const char b){

    size_t len = strlen(a) + 1;
    char *ret = (char*)malloc(len * sizeof(char) + 1);
    *ret = '\0';

    const char end[2] = {b, '\0'};

    return strcat(strcat(ret, a) , end);
}

int skipSingleLineComment(int indexToStartFrom, int upToIndex, char* source) {

    int i = indexToStartFrom;

    while(i <  upToIndex) {

        char curSymb = source[i];
        if (curSymb == '\n'|| curSymb == '\r' || curSymb == '\0') {
            break;
        }
        i++;
    }

    return i;
}


int skipMultilineComment(int indexToStartFrom, int upToIndex, char* source) {

    int i = indexToStartFrom;
    char prevSymb = -1;

    while(i <  upToIndex) {


        char curSymb = source[i];

        if (prevSymb == '*' && curSymb == '/') {
            return i;
        }
        prevSymb = curSymb;
        i++;
    }

    return -1;
}

char * removeComments(char* source) {

    const int DEBUG = 0;
    const char FIRST_COMMENT_SYMBOL = '/';
    const char SINGLELINE = '/';
    const char MULTILINE = '*';
    const char IS_NOT_COMMENT = -1;

    char* result = "\0";
    int matchedPreviously = 0, i = 0;

    if (DEBUG) {
        printf("ORIGINAL:[%s]\n", source);
    }

    int sourceLen = strlen(source);

    for(i = 0; i < sourceLen; i++) {

        // printf("\n[%s]\n", source);
        char curChar = source[i];
        char typeOfComment = IS_NOT_COMMENT;

        if (matchedPreviously) {

            matchedPreviously = 0;

            if (curChar == MULTILINE) {
                typeOfComment = MULTILINE;
            }else if (curChar == SINGLELINE) {
                typeOfComment = SINGLELINE; 
            }
            if (typeOfComment == IS_NOT_COMMENT) {
                //if comment was not matched add first comment symbol(/) to string
                result = stradd(result, FIRST_COMMENT_SYMBOL);
            }else {
                if (typeOfComment == SINGLELINE) {
                    i = skipSingleLineComment(i+1, sourceLen, source);
                }else if (typeOfComment == MULTILINE) {

                    int rez = skipMultilineComment(i+1, sourceLen, source);

                    //if end of comment was not recognized
                    if (rez == -1) {
                        //return first two charackter that were skipped
                        result = stradd(result, FIRST_COMMENT_SYMBOL); 
                        result = stradd(result, MULTILINE); 
                    }else {
                        i = rez;
                    }
                }
            }
        }else {

            int isFirstCommentSymbol = curChar == FIRST_COMMENT_SYMBOL;
            if (!isFirstCommentSymbol) {
                result = stradd(result, curChar);
            }
            matchedPreviously = isFirstCommentSymbol;
        }

        if (DEBUG == 2) {
            printf("RESULT:[%s]\n", result);
        }
    }

    if (DEBUG) {
        printf("RESULT:[%s]", result);
    }
    return result;
}
