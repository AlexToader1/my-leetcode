// Last updated: 11/27/2026, 12:16:56 AM
int singleNumber(int* nums, int numsSize) {
    int XOR = 0;
    for (int i = 0; i < numsSize; i++) {
        XOR ^= nums[i];
    }
    return XOR;
}