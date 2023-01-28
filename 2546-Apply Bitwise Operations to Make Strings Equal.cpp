class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        int c1 = count(s.begin(), s.end() , '1');
        int c2 = count(target.begin(), target.end() , '1');
        if (c1 == 0 and c2 == 0) return true;
        return c1 > 0 and c2 > 0;
    }
};