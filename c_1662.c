#include <stdio.h>
#include <stdbool.h>

bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size){
    int p = 0;
    int q = 0;
    int j = 0;

    for (int i = 0; i < word1Size; i++) {
        // char in word1
        while (word1[i][p] != '\0') {
            char c1 = word1[i][p];
            
            // char in word2
            char c2 = word2[j][q];
            if (c2 == '\0' && j < word2Size-1) {
                j++;
                q = 0;
                continue;
            }
            printf("%c %c\n", c1, c2);
            if (c1 != c2) {return false;}
            p++;
            q++;
        }
        p = 0;
    }
    return word2[j][q] == '\0' && j == word2Size-1;
}

int main(void) {
    char *word1[] = {"ab", "c"};
    char *word2[] = {"a", "bcd"};

    bool rc = arrayStringsAreEqual(word1, sizeof(word1)/sizeof(char*), word2, sizeof(word2)/sizeof(char*));
    printf("%d\n", rc);

    return 0;
}