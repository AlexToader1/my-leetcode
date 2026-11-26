// Last updated: 11/27/2026, 12:16:49 AM
bool isPowerOfTwo(int n) {
    if(n<=0) return false;

    while(n%2==0)
    {
        n/=2;
    }

    return n==1;
}