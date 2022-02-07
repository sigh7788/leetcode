#include <stdio.h>

int singleNumber(int* nums, int numsSize){
    int tmp = 0;
    for (int i = 0; i < numsSize; i++) {
        tmp ^= nums[i];
    }

    return tmp;
}

int main(void) {
    int nums[] = {4,1,2,1,2};
    int rc = singleNumber(nums, sizeof(nums)/sizeof(int));
    printf("%d\n", rc);

    return 0;
}