#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char * s){
    char ss[10000] = {'\0'};
    int j = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            // push
            ss[j++] = s[i];
        } else {
            // pop
            if (j < 1) return false; // no element
            j--;
            if (ss[j] == '(') {
                if (s[i] != ')') return false;
            }
            else if (ss[j] == '[') {
                if (s[i] != ']') return false;
            }
            else if (ss[j] == '{') {
                if (s[i] != '}') return false;
            }

            ss[j] = '\0'; // right element
        }
    }

    // check num
    return j == 0;
}

int main(void) {
    bool rc = isValid("()[]{}");
    printf("%d\n", rc);

    return 0;
}