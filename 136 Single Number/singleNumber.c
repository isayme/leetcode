int singleNumber(int* nums, int numsSize) {
    int rel = 0;
    int i;
    
    for (i = 0; i < numsSize; i++) {
        rel ^= nums[i];
    }
    
    return rel;
}