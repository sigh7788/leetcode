#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    if (x < 0) return false;

    int a[64] = {0};
    int i = 0;
    while (x != 0) {
       a[i++] = x % 10;
       x /= 10;
    }

    for (int j = 0; j < i/2; j++) {
        if (a[j] != a[i-1-j]) return false;
    }

    return true;
}

int main(void) {
    bool rc = isPalindrome(1221);
    printf("%d\n", rc);

    return 0;
}