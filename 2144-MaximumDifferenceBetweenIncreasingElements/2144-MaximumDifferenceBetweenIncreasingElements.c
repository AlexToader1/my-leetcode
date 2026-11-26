// Last updated: 11/27/2026, 12:16:23 AM
int maximumDifference(int* nums, int numsSize) {
    int min=nums[0];
    int maxdif=-1;

    int aux;

    for (int j=1; j<numsSize; j++)
     {
        if (nums[j]>min) 
        {
            aux=nums[j]-min;
            if (aux>maxdif) 
            {
                maxdif=aux;
            }
        } else
        {
            min=nums[j];
        }
    }
    return maxdif;
}