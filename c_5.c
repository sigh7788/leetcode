#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestPalindrome(char * s){
    char *ss = s;
    char *se = s + strlen(s) - 1;
    while (ss < se)
}

int main(void) {
    char *s = "au";
    char *ss = longestPalindrome(s);
    printf("max_str %s\n", ss);
    return 0;
}