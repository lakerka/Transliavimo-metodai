#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VARS 10
#define  MAX_VAR_NAME 10

struct variable {
    char name[MAX_VAR_NAME];
    int value;
};

typedef struct variable Var;

Var v[MAX_VARS];

int varCount = 0;

int addVar(char name[], char value[]) {
    if (varCount == MAX_VARS) {
        return -2;
    }
	int i;
	for(i = 0; i < MAX_VARS; i++) {
        if (strcmp(v[i].name, name) == 0) {
            return -1; 
        }
    }

    Var newVariable;
    strcpy(newVariable.name, name);
    newVariable.value = atoi(value);
    v[varCount] = newVariable;
    return 1;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main(void) {

    int rez = 0;
	
    rez = min(addVar("as", "5"), rez);
    rez = min(addVar("labas", "5"), rez);
    rez = min(addVar("as", "5"), rez);

    printf("%d\n", rez);

	return 0;
}

