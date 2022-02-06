#include <stdio.h>

int sumOddLengthSubarrays(int* arr, int arrSize){
    int sum = 0;
    for (int i = 0; i < arrSize; i++) {
        for (int j = i; j < arrSize; j += 2) {
            int n = i;
            while (n <= j) {
                sum += arr[n++];
            }
        }
    }

    return sum;
}

int main(void) {
    int arr[] = {1,4,2,5,3};
    int rc = sumOddLengthSubarrays(arr, sizeof(arr)/sizeof(int));
    printf("%d\n", rc);

    int arr1[] = {10,11,12};
    rc = sumOddLengthSubarrays(arr1, sizeof(arr1)/sizeof(int));
    printf("%d\n", rc);
    return 0;
}