#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isIsomorphic(char * s, char * t){
    int sLen = strlen(s);
    int tLen = strlen(t);

    if (sLen != tLen) return false;

    char map[1000] = {};
    char map1[1000] = {};
    for (int i = 0; i < sLen; i++) {
        // never add
        if (map[s[i]] == 0 && map1[t[i]] == 0) {
            map[s[i]] = t[i];
            map1[t[i]] = s[i];
        } else if (map[s[i]] != t[i] || map1[t[i]] != s[i]) {
            return false;
        }
    }

    return true;
}

int main(void) {
    char *s = "badc";
    char *t = "baba";

    bool rc = isIsomorphic(s, t);
    printf("%d\n", rc);
    return 0;
}