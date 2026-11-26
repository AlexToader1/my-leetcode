// Last updated: 11/27/2026, 12:16:18 AM
long long maximumTripletValue(int* nums, int n) {
    long long maxi = 0;
    for (int j = 1; j < n - 1; ++j) {
        int leftmax = 0;
        for (int i = 0; i < j; ++i) {
            if (nums[i] > leftmax) leftmax = nums[i];
        }
        int rightmax = 0;
        for (int k = j + 1; k < n; ++k) {
            if (nums[k] > rightmax) rightmax = nums[k];
        }
        long long val = (long long)(leftmax - nums[j]) * rightmax;
        if (val > maxi) maxi = val;
    }
    return maxi;
}