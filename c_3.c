#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char * s){
    int len = strlen(s);
    if(len == 0) return 0;

    int i = 0, j = 0;
    int max = 1;
    for (i = 0; i < len; i++) {
        int a[1000];
        memset(a, -1, sizeof(a)/sizeof(int));// = {0};
        int sum = 1;
        a[s[i]]=i; 
        for (j = i + 1; j < len; j++) {
            printf("i %d, j %d, s[j] %c, a[s[j]] %d\n", i, j, s[j], a[s[j]]);
            if (a[s[j]] == -1) {
                sum++;
                a[s[j]] = j;
            }
            else {
                i = a[s[j]];
                break;
            }
        }

        max = sum > max ? sum : max;
    }

    return max;
}

int main(void) {
    char *s = "au";
    int max_len = lengthOfLongestSubstring(s);
    printf("max_len %d\n", max_len);
    return 0;
}