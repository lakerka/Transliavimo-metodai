#include "removeCmnt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int i = 0;
    for(i = 1; i < argc; i++) {
        printf("[ARG: %s]\n", removeComments(argv[i]));
    }
}
