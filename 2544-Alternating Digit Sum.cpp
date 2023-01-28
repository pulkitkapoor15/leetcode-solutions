class Solution {
public:
    int alternateDigitSum(int n) {
        int len = to_string(n).size();
        int total = 0, i = 0;
        while (n > 0) {
            if (n == 0) break;
            if (len % 2 == 1)
                total += (i++ % 2 == 0) ? (n % 10) : -(n % 10);
            else
                total += (i++ % 2 == 0) ? -(n % 10) : (n % 10);
            n /= 10;
        }
        return total;
    }
};