// Last updated: 11/27/2026, 12:16:26 AM
int maximum69Number(int num) {
    int t=num,k=0,p=1;
    while (t) {
        if (t%10==6) k=p;
        t/=10;
        p*=10;
    }
    if (k>0) return num+3*k;
    return num;
}