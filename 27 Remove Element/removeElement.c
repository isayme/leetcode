int removeElement(int* nums, int numsSize, int val) {
    int i;
    int idx = 0;
    
    for (i = 0; i < numsSize; i++) {
        if (val != nums[i]) {
            nums[idx++] = nums[i];
        }
    }
    
    return idx;
}