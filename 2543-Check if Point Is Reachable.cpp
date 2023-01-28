class Solution {
public:
    bool isReachable(int x, int y) {
        return __builtin_popcount(gcd(x, y)) == 1;
    }
};