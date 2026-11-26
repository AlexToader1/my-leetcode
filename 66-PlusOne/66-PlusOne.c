// Last updated: 11/27/2026, 12:17:10 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }

    int* digitsbutbigger = (int*)malloc((digitsSize + 1) * sizeof(int));
    digitsbutbigger[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        digitsbutbigger[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return digitsbutbigger;
}