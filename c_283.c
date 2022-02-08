#include <stdio.h>

void dump(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
void moveZeroes(int* nums, int numsSize){
    int i = 0;
    int j = numsSize - 1;
    for (int i = 0; i < j; i++) {
        if (nums[i] == 0) {
            for (int k = i; k < j; k++) {
                nums[k] = nums[k+1];
            }
            nums[j] = 0;
            j--;
            i--;
        }
    }
}

void moveZeroes2(int* nums, int numsSize){
    int i = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            for (int k = i+1; k < numsSize; k++) {
                if (nums[k] != 0) {
                    nums[i] = nums[k];
                    nums[k] = 0;
                    break;
                }
            }

            if (nums[i] == 0) break;
        }
    }
}

int main(void) {
    int nums[] = {0,1,0,3,12};
    moveZeroes2(nums, sizeof(nums)/sizeof(int));
    dump(nums, sizeof(nums)/sizeof(int));
    return 0;
}