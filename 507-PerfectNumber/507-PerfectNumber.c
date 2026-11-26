// Last updated: 11/27/2026, 12:16:33 AM
bool checkPerfectNumber(int num) {
    long long sum=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    return num==sum ? true : false;
}