#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * addBinary(char * a, char * b){
    char p[10000] = {0};
    int index_a = strlen(a) - 1;
    int index_b = strlen(b) - 1;
    int len = sizeof(p)/sizeof(char);
    int index_p = len - 1;
    char c = '0';
    while (index_a >= 0 || index_b >= 0 || c > '0') {
        if (index_a >= 0) {
            c += a[index_a--] - '0';
        }
        if (index_b >= 0) {
            c += b[index_b--] - '0';
        }

        if (c > '1') {
            p[index_p--] = c - '2' + '0';
            c = '1';
        } else {
            p[index_p--] = c;
            c = '0';
        }
    }

    char *pp = (char*)malloc(sizeof(char) * (len-index_p));
    index_p++;
    int i = 0;
    while (index_p < len) {
        pp[i++] = p[index_p++];
    }
    pp[i] = '\0';
    return pp;
}

int main(void) {
    char *a = "11";
    char *b = "1";
    char *rc = addBinary(a, b);
    printf("%s\n", rc);

    return 0;
}