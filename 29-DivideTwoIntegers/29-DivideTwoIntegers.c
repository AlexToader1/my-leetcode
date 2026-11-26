// Last updated: 11/27/2026, 12:17:16 AM
int divide(int dividend, int divisor) {
    if (dividend<=INT_MIN && divisor==-1)
        return INT_MAX;
    return dividend/divisor;
}