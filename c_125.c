#include <string.h>
#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(char * s){
    int len = strlen(s);
    char c1;
    char c2;
    char *p = s;
    char *q = s + len - 1;
    while (p < q) {
        c1 = *p;
        c2 = *q;
        
        // upper to lower
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 'a' - 'A';
        }

        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 'a' - 'A';
        }

        // remove all non-alphanumeric characters
        if ((c1 >= '0' && c1 <= '9') || (c1 >= 'a' && c1 <= 'z'))
        {
            //do nothing
        }else {
            p++;
            continue;
        }

        if ((c2 >= '0' && c2 <= '9') || (c2 >= 'a' && c2 <= 'z'))
        {
            //do nothing
        }else {
            q--;
            continue;
        }
        printf("c1 %c, c2 %c\n", c1, c2);
        if (c1 != c2 ) return false;
        p++;
        q--;
    }

    return true;
}

int main(void) {
    char *s = " ";
    bool rc = isPalindrome(s);
    printf("%d\n", rc);
    return 0;
}