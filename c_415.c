#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * addStrings(char * num1, char * num2){
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    char p[10001] = {0};
    int len = 10001;
    
    len1--;
    len2--;
    len--;
    char tmp = 0;
    while (1) {
        if (len1 >= 0) {
            tmp += num1[len1--] - '0';
        }

        if (len2 >= 0) {
            tmp += num2[len2--]- '0';
        }

        printf("%d len1 %d, len2 %d,len %d\n", tmp, len1, len2,len);
        if (tmp > 9) {
            p[len--] = tmp - 10 +'0';
            tmp = 1;
        } else {
            p[len--] = tmp + '0';
            tmp = 0;
        }
        if (len1 < 0 && len2 < 0 && tmp == 0) break;
    }

    int n = 10001 - len - 1;
    printf("%d\n", n);
    char *s = (char*)malloc(sizeof(char) * (n+1));
    for (int i = 0; i < n; i++) {
        s[i] = p[++len];
    }
    s[n] = '\0';
    return s;
}

int main(void) {
    char *num1 = "956";
    char *num2 = "77";
    char *rc = addStrings(num1, num2);
    printf("%s\n", rc);
    return 0;
}