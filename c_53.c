#include <stdio.h>

int maxSubArray(int* nums, int numsSize){
    int sum = 0;
    int max = nums[0];
    for (int i = 0; i < numsSize; i++) {
        if (sum + nums[i] > 0) {
            sum += nums[i];
            if (sum > max) max = sum;
        } else {
            sum = 0;
            if (nums[i] >= max) {
                max = nums[i];
            }
        }
    }

    return max;
}

int main(void) {
    int nums[] = {5,4,-1,7,8};
    int numsSize = sizeof(nums)/sizeof(int);
    int rc = maxSubArray(nums, numsSize);
    printf("%d\n", rc);

    return 0;
}