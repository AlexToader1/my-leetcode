// Last updated: 11/27/2026, 12:16:45 AM
int missingNumber(int *nums, int numsSize) {
    int sum=numsSize*(numsSize+1)/2;
    int sum1=0;
    for (int i=0;i<numsSize;i++) 
    {
        sum1+=nums[i];
    }
    return sum-sum1;
}