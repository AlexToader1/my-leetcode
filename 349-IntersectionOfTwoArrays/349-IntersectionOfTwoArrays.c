// Last updated: 11/27/2026, 12:16:41 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize=0;
    int min;
    if(nums1Size<nums2Size)
        min=nums1Size;
    else
        min=nums2Size;
    int* returns=(int*)malloc(min*sizeof(int));

    for (int i=0; i<nums1Size; i++) 
    {
        for (int j=0; j<nums2Size; j++) 
        {
            if (nums1[i]==nums2[j]) 
              {  int ok=0;
                for (int k=0; k<*returnSize; k++) 
                {
                    if (returns[k]==nums1[i])
                    {
                        ok=1;
                        break;
                    }
                }
                if (ok==0) 
                {
                    returns[*returnSize]=nums1[i];
                    (*returnSize)++;
                }
                break;
            }
        }
    }
    return returns;
}