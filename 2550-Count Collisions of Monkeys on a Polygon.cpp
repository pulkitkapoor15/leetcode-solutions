class Solution {
public:
    
    int power(long long x, int y, int p) {
        long long res = 1ll;
        while (y > 0) {
            if (y % 2 == 1)
                res = (res * x) % p;
            y = y >> 1;
            x = (x * x) % p;
        }
        return res % p;
    }
    int monkeyMove(int n) {
        int mod = 1000000007;
        return (power(2ll, n, mod) - 2 + mod) % mod;
    }
};