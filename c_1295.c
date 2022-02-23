#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findNumbers(int* nums, int numsSize){
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= 100000) { // >= 100000
            count++;
        } else if (nums[i] >= 10000) { // >= 10000
        } else if (nums[i] >= 1000) { // >= 1000
            count++;
        } else if (nums[i] >= 100) { // >= 100 
        } else if (nums[i] >= 10) { // >= 10
            count++;
        }else if (nums[i] >= 1) { // >= 1
        }
    }

    return count;
}

int main(void) {
    int nums[] = {12,345,2,6,7896};
    int numsSize = sizeof(nums)/sizeof(int);

    int rc = findNumbers(nums, numsSize);
    printf("%d\n", rc);

    return 0;
}