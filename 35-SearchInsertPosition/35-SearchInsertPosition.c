// Last updated: 11/27/2026, 12:17:15 AM
int searchInsert(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++)
        {
            if(nums[i]==target)
                return i;
            if(nums[i]>target)
                return i;
        }
    return numsSize;
}