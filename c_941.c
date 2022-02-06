#include <stdio.h>
#include <stdbool.h>

bool validMountainArray(int* arr, int arrSize){
    if (arrSize < 3) return false;
    int max = arr[0];
    int n = 0;
    bool flag = false;
    for (int i = 1; i < arrSize; i++) { 
        if (arr[i] > max) {
            if (!flag) {
                max = arr[i];
                n = i;
            } else {
                return false;
            }
        }
        else if (arr[i] == max) return false;
        else {
            if (!flag) {
                flag = true;
            }
            max = arr[i];
        }
    }
    if (n < arrSize - 1 && n > 0) return true;
    return false;
}

int main(void) {
    int arr[] = {3,7,20,14,15,14,10,8,2,1};
    bool rc = validMountainArray(arr, sizeof(arr)/sizeof(int));
    printf("%d\n", rc);
    return 0;
}