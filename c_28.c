#include <stdio.h>
#include <string.h>

int strStr(char * haystack, char * needle){
    int len = strlen(haystack);
    int len2 = strlen(needle);
    if (len2 > len) return -1;
    if (*needle == '\0') return 0;

    for (int i = 0; i <= len-len2; i++) {
        if (haystack[i] == needle[0]) {
            int j = 1;
            for (; j < len2; j++) {
                if (haystack[i+j] != needle[j]) {break;}
            }
            if (j == len2) return i;
        }
    }

    return -1;
}

int main(void) {
    int rc = strStr("mississippi", "issip");
    printf("%d\n", rc);
    return 0;
}