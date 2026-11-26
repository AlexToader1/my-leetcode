// Last updated: 11/27/2026, 12:17:23 AM
bool isPalindrome(int x) {
    if (x < 0) return false;

    char strin[20];  
    sprintf(strin, "%d", x);

    int l = 0, r = strlen(strin) - 1;
    while (l < r) {
        if (strin[l] != strin[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}