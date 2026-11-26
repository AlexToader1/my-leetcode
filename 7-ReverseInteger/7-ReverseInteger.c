// Last updated: 11/27/2026, 12:17:24 AM
int reverse(int x){
    long long aux=0;
    long long aux1=x;
    int p=-1,k;
    while(x!=0)
    {
        p++;
        x/=10;
    }
    while(aux1!=0)
    {
        k=aux1%10;
        aux+=k*pow(10,p);
        p--;
        aux1/=10;
    }
    if(pow(2,31)-1<aux || -pow(2,31)>aux)
        return 0;
    return aux;
}