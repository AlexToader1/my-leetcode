// Last updated: 11/27/2026, 12:16:46 AM
int add(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int addDigits(int num) {

    while(num>9)
    {
        num=add(num);
    }
    return num;
}