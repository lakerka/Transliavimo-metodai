#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void openStream(char* filename, FILE** file, char* mode) {

    *file = fopen(filename, mode); 
    if (*file == NULL) {
        fprintf(stderr, "Error while opening file: %d (%s)\n", errno, strerror(errno));
    }

    fprintf(stdout, "Function file value is null: %d\n", *file == NULL);
    //if no file was set yyin/yyout default to stdin/stdout
}


void closeStream(FILE* file, char* errorMessage) {


    int errorOccured = fclose(file) == EOF;

    if (errorOccured) {
        fprintf(stderr, "%s\n", errorMessage);
    }
}


int main() {

    FILE* f;
    openStream("result", &f, "w");

    fprintf(stdout, "Main file value is null: %d\n", f == NULL);


    fprintf(f, "Before\n");

    closeStream(f, "Failed to close file!");

    //despite the fact that files was closed fprintf return non negative value
    int result = fprintf(f, "After\n");

    return 0;
}
