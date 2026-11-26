// Last updated: 11/27/2026, 12:17:12 AM
double myPow(double x, int n) {
    double power=1;
    long long nn=n;

    if (nn < 0) 
    {
        x = 1 / x;
        nn = -nn;
    }

    while(nn>0)
    {
        if(nn%2==1)
            power*=x;
        x*=x;
        nn/=2;
    }

    return power;
}