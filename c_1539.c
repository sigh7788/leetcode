#include <stdio.h>

int findKthPositive(int* arr, int arrSize, int k){
    int tmp = 0;
    for (int i = 0; i < arrSize; i++) {
        // 相邻元素丢的个数
        int n = arr[i] - tmp - 1;
        tmp = arr[i];
        if (k > n) {
            k -= n;
            continue;
        } else {
            // arr[i] - n -1 is arr[i-1]
            return arr[i] - n -1 + k;
        }
    }

    return arr[arrSize-1]+k;
}

int main(void) {
    int arr[] = {2,3,4,7,11};
    int k = 5;
    int rc = findKthPositive(arr, sizeof(arr)/sizeof(int), k);
    printf("%d\n", rc);

    return 0;
}