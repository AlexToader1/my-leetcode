// Last updated: 11/27/2026, 12:16:44 AM
bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n%3 ==0) 
    {
        n/=3;
    }
    if(n==1) return true;
    return false;
}