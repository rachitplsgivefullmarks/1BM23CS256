void moveZeroes(int* nums, int numsSize) {
    int last_non_zero_index = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[last_non_zero_index] = nums[i];
            last_non_zero_index++;
        }
    }
    for (int i = last_non_zero_index; i < numsSize; i++) {
        nums[i] = 0;
    }
}
