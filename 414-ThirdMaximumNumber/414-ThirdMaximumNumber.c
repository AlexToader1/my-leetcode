// Last updated: 11/27/2026, 12:16:35 AM
int thirdMax(int* nums, int numsSize) {
    long long max1=LLONG_MIN, max2=LLONG_MIN, max3=LLONG_MIN;
    for(int i=0;i<numsSize;i++)
        {
            if(nums[i]>max1)
                {
                    max3=max2;
                    max2=max1;
                    max1=nums[i];
                }
                else if(nums[i]>max2 && nums[i]!=max1)
                {
                    max3=max2;
                    max2=nums[i];
                }
                else if(nums[i]>max3 && nums[i]!=max2 && nums[i]!=max1)
                    {
                        max3=nums[i];
                    }
        }
    if(max3!=LLONG_MIN)
        return max3;
    return max1;
}