// Last updated: 11/27/2026, 12:16:51 AM
/*
bool isPrime(long long n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;

    for (long long i=5; i*i<=n; i+=6) {
        if (n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}
int countPrimes(int n) {
    int num=2;
    if (n==0 || n==1 || n==2) return 0;
    if(n==3) return 1;
    for(int i=5;i<n;i+=2)
    {
        if(isPrime(i))
            num++;
    }
    return num;
}

*/

int countPrimes(int n) {
    int* prime = calloc(n + 1, sizeof(int));
    for (int i = 2; i <= sqrt(n); i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (!prime[i])
            count++;
    }
    return count;
}