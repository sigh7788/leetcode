#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canConstruct(char * ransomNote, char * magazine){
    int len1 = strlen(ransomNote);
    int len2 = strlen(magazine);
    int arr[26] = {0};
    for (int i = 0; i < len1; i++) {
        arr[ransomNote[i] - 'a']--;
    }

    for (int i = 0; i < len2; i++) {
        arr[magazine[i] - 'a']++;
    }

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        if (arr[i] < 0) return false;
    }

    return true;
}

// find ransomNote in magazine
int main(void) {
    char *ransomNote = "aa";
    char *magazine = "aab";
    bool rc = canConstruct(ransomNote, magazine);
    printf("%d\n", rc);

    return 0;
}