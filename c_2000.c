#include <stdio.h>
#include <string.h>

char * reversePrefix(char * word, char ch){
    int len = strlen(word);
    int i = 0;
    for (; i < len; i++) {
        if (ch == word[i]) {
            break;
        }
    }

    // not exist or the 1st ch
    // no need to reverse, return word directly
    if (i == 0 || i == len) return word;

    // do reverse
    char tmp;
    for (int j = 0; j <= i; j++, i--) {
        tmp = word[j];
        word[j] = word[i];
        word[i] = tmp;
    }

    return word;
}

int main(void) {
    char *word = "dcbaefd";
    char ch = 'd';
    char *rc = reversePrefix(word, ch);
    printf("%s\n", rc);

    char *word1 = "abcd";
    char ch1 = 'z';
    rc = reversePrefix(word1, ch1);
    printf("%s\n", rc);

    return 0;
}