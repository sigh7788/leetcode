#include <stdio.h>

int mySqrt(int x){
    if (x == 0) return 0;
    if (x < 4) return 1;
    if (x < 9) return 2;

    int n = x / 2;
    while (n > x/n) {
        n /= 2;
    }

    for (int i = n; i <= n*2; i++) {
        if (i > x/i) {
            return i-1;
        }
    }

    return 0;
}

int main(void) {
    int n = 8;
    int rc = mySqrt(9);
    printf("%d\n", rc);

    return 0;
}