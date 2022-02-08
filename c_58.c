#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char * s){
    int len = strlen(s);
    int n = -1;
    int k = -1;
    for (int i = len - 1; i >= 0; i--) {
        // find the 1st non-blank
        if (s[i] != ' ' && n == -1) n = i;

        // find the 1st blank after found the 1st non-blank
        if (s[i] == ' ' && n != -1) { 
            k = n - i;
            break;
        } 
    }

    // not found blank
    if (k == -1) {
        k = n + 1;
    }

    return k;
}

int main(void) {
    char *s = " ";
    int rc = lengthOfLastWord(s);
    printf("%d\n", rc);

    return 0;
}