// Last updated: 11/27/2026, 12:16:39 AM
bool isPerfectSquare(int num) {
    long long i;
    for(i=1;i*i<=num;i++)
    {
        if(i*i==num)
            return true;
    }
    return false;    
}