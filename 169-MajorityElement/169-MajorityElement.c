// Last updated: 11/27/2026, 12:16:54 AM
int majorityElement(int* nums, int numsSize) {
    int count=0;
    int current =0;
    for(int i=0;i<numsSize;i++)
    {
    if(count==0)
    {
        current = nums[i];
        count=1;
    }
    else if(current==nums[i]){
            count++;
    }
        else{
            count--;
        }
    }
    int maj=current;

    return maj;
}