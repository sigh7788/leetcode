#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char s[200] = {0};
    char c = '\0';
    int j = 0;
    int i = 0;
    int k = 0;
    while (1) {
        // 1st strs's j char
        if (i == 0) {
            c = strs[i][j];
            if (c == '\0') break;
        } else {
            if (c != strs[i][j]) break;
        }
        i++;
        if (i >= strsSize) {
            s[k++] = c;
            c = '\0';
            i = 0;
            j++;
        }
    }
    
    char *ss = (char*)malloc(sizeof(char)*(k+1));
    strcpy(ss, s);
    ss[k] = '\0';
    return ss;
}

int main(void) {
    char *strs[] = {"flower","flow","flight"};
    int strsSize = sizeof(strs) / sizeof(char*);
    char * s = longestCommonPrefix(strs, strsSize);
    printf("%s\n", s);

    return 0;
}