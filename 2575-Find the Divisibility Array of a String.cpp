class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        long long rem = 0;
        vector <int> res;
        for (char c: word) {
            int a = c - '0';
            rem = (rem * 10 + a) % m;
            if (rem % m == 0) res.push_back(1);
            else res.push_back(0);
        }
        return res;
    }
};
