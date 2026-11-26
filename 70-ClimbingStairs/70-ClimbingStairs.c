// Last updated: 11/27/2026, 12:17:07 AM
int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 1, b = 2, c;
    for (int i = 3; i <= n; i++) {
        c = a + b; 
        a = b; 
        b = c; 
    }
    return b;
}