#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target){
    int index = -1;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) return i;
        else if (nums[i] < target) {}
        else {index = i;break;}
    }
    if (index == -1) index = numsSize;
    return index;
}

int main(void) {
    int nums[] = {1,3,5,6};
    int target = 7;
    int rc = searchInsert(nums, sizeof(nums)/sizeof(int), target);
    printf("%d\n", rc);

    return 0;
}