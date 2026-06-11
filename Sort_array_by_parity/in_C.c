int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int* new_arr = (int*)malloc(numsSize * sizeof(int));
    int even = 0;
    int odd = numsSize - 1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            new_arr[even] = nums[i];
            even++;
        } else {
            new_arr[odd] = nums[i];
            odd--;
        }
    }

    *returnSize = numsSize;
    return new_arr;
}
