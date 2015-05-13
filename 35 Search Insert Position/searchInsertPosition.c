int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int pivot = 0;
    
    if (numsSize < 1) {
        return 0;
    }

    while (left <= right) {
        pivot = (left + right)/2;
        if (nums[pivot] == target) {
            return pivot;
        } else if (nums[pivot] > target) {
            right = pivot - 1;
        } else {
            left = pivot + 1;
        }
    }
    
    if (nums[pivot] > target) {
        return pivot;
    } else {
        return pivot + 1;
    }
}