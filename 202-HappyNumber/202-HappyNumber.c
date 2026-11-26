// Last updated: 11/27/2026, 12:16:53 AM
bool isHappy(int n) {
    int sum=0,k;
    if (n==1) return true;
    while(n>4)
    {
        while(n)
        {
            k=n%10;
            sum+=k*k;
            n/=10;
        }
        if(sum==1)
            return true;
        n=sum;
        sum=0;
    }
    return false;
}