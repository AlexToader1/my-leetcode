// Last updated: 11/27/2026, 12:17:25 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int* sum=(int*)malloc(2*sizeof(int));

    for (int i=0; i<numsSize; i++) {
        for (int j=i+1; j<numsSize; j++) 
        {
            if (nums[i]+nums[j]==target) 
            {
                sum[0]=i;
                sum[1]=j;
                return sum;
            }
        }
    }
    return NULL;
}