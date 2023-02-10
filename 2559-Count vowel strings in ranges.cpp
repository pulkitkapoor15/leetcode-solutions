class Solution {
public:
    bool isVowel(char a) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') return true;
        return false;
    }

    bool isValid (string s) {
        if (isVowel(s[0]) and isVowel(s[s.size() - 1])) return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector <int> run (words.size(), 0);
        run[0] = isValid(words[0]);
        for (int i = 1; i < words.size(); i++) {
            run[i] = run[i - 1] + (isValid(words[i]));
        }
        vector <int> result;
        for (auto query: queries) {
            int ans;
            if (query[0] == 0) ans = run[query[1]];
            else  ans = run[query[1]] - run[query[0] - 1];
            // int ans = run[query[1]] - run[query[0]]; // + (query[0] > 0 ? (run[query[0]] - run[query[0] - 1]) : 0);
            result.push_back(ans);
        }
        return result;
    }
};
