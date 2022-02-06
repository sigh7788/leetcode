#include <stdio.h>
#include <string.h>

int finalValueAfterOperations(char ** operations, int operationsSize){
    int X = 0;
    for (int i = 0; i < operationsSize; i++) {
        if (0 == strcmp(operations[i], "X++") || 0 == strcmp(operations[i], "++X")) {
            X++;
        }else {
            X--;
        }
    }
    return X;
}

int main(void) {
    char *p[] = {"--X", "X++", "X++"};
    int X = finalValueAfterOperations(p, sizeof(p)/sizeof(char*));
    printf("%d\n", X);

    return X;
}
