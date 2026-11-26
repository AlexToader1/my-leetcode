// Last updated: 11/27/2026, 12:16:47 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int* answer=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;

    answer[0]=1;
    for(int i=1;i<numsSize;i++) 
    {
        answer[i]=answer[i-1]*nums[i-1];
    }
    int right=1;

    for(int i=numsSize-1;i>=0;i--) 
    {
        answer[i]*=right;
        right*=nums[i];
    }

    return answer;
}