#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lex.yy.c"

int errorOccured = 0;

void safeExit();

void closeStream(FILE* file, char* errorMessage);

void openStream(const char* STD_STREAM, char* filename, FILE** file, char* mode);

void safeExit() {
    errorOccured = 1;
    closeStream(yyin, "Failed to close input file!");
    closeStream(yyout, "Failed to close output file!");
}

void closeStream(FILE* file, char* errorMessage) {
    int errorOccured = fclose(file) == EOF;
    if (errorOccured) {
        fprintf(stderr, "%s\n", errorMessage);
    }
}

void openStream(const char* STD_STREAM, char* filename, FILE** file, char* mode) {
    int isStdStream = strcmp(filename, STD_STREAM) == 0; 
    if (!isStdStream) {
        *file = fopen(filename, mode); 
        if (*file == NULL) {
            fprintf(stderr, "Error while opening file: %d (%s)\n", errno, strerror(errno));
            safeExit();
        }
    }
    //if no file was set yyin/yyout default to stdin/stdout
}

int main(int argc, char *argv[]) {

    #if YYDEBUG
        yydebug = 1;
    #endif
    
    const char* STDIN = "stdin";
    const char* STDOUT= "stdout";

    if (argc < 3) {
        fprintf(stderr, "Input and output file/stream arguments must be provided!");
        safeExit();
    }

    char* in = argv[1];
    char* out = argv[2];

    openStream(STDIN, in, &yyin, "r");
    openStream(STDOUT, out, &yyout, "w");
 
    if (!errorOccured) {
        yylex();
        safeExit();
    }

    return 0;
}

int yywrap(void) {
    return 1;
}
