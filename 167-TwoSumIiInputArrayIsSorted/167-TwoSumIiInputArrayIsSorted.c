// Last updated: 11/27/2026, 12:16:55 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize=2;
    int* sum=(int*)malloc(2*sizeof(int));

    int left=0, right=numbersSize-1;
    
    int s;

    while (left<right)
     {
        s=numbers[left]+numbers[right];

        if (s==target) 
        {
            sum[0]=left+1;
            sum[1]=right+1;
            return sum;
        } 
        else if (s<target) 
        {
            left++;
        } 
        else 
        {
            right--;
        }
    }

    return NULL;
}