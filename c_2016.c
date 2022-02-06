#include <stdio.h>

int maximumDifference(int* nums, int numsSize){
    int MAX = 0;
    for (int i = 0; i < numsSize; i++) {
         for (int j = i+1; j < numsSize; j++) {
             if (nums[j] - nums[i] > MAX) {
                 MAX = nums[j] - nums[i];
             }
         }
    }
    if (MAX == 0) {MAX = -1;}
    
    return MAX;
}

int main(void) {
    int nums[] = {7,1,5,4};
    int rc = maximumDifference(nums, sizeof(nums)/sizeof(int));
    printf("%d\n", rc);
    return 0;
}