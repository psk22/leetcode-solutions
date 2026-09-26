void moveZeroes(int* nums, int numsSize) {
    int writeIndex = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[writeIndex++] = nums[i];
        }
    }

    while (writeIndex < numsSize) {
        nums[writeIndex++] = 0;
    }
}