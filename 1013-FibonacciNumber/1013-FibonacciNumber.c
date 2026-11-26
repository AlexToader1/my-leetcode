// Last updated: 11/27/2026, 12:16:28 AM


int fib(int n){
    int a,b,c;
    if(n==0)
        return 0;
    a=0;
    b=1;
    for(int i=0;i<n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}