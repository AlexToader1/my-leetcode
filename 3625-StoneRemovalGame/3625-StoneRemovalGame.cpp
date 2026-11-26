// Last updated: 11/27/2026, 12:16:19 AM
class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        int ok = 0;

        if (n == 10)
            return true;
        if (n < 10)
            return false;

        while (n >= i) {
            n-=i;
            ok++;
            i--;
        }

        return ok % 2 ? true : false;
    }
};