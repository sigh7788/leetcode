#include <stdio.h>

int climbStairs(int n){
    if (n == 1) return 1;
    if (n == 2) return 2;

    int sum = 0;
    int sum_1 = 1;
    int sum_2 = 1;
    for (int i = 2; i <=n; i++) {
        sum = sum_1 + sum_2;
        sum_2 = sum_1;
        sum_1 = sum;
        printf("sum -- %d\n", sum);
    }

    return sum;
}

// Time Limit Exceeded
int climbStairs2(int n){
    if (n == 1) return 1;
    if (n == 2) return 2;
    return climbStairs2(n-1) + climbStairs2(n-2);
}

int main(void) {
    int n = 45;
    int rc = climbStairs(n);
    printf("%d\n", rc);

    rc = climbStairs2(n);
    printf("%d\n", rc);
    return 0;
}