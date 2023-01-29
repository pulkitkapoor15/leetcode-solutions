#define ll long long
class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        if (k == 1 || weights.size() == k) return 0;
        int n = weights.size();
        ll maxScore = 0, minScore = 0;
        vector<int> adjSum;
        for (int i = 0; i < n - 1; i++) adjSum.push_back(weights[i] + weights[i+1]);
        sort(adjSum.begin(), adjSum.end());
        for (int i = 0; i < k - 1; i++) {
            minScore += adjSum[i];
            maxScore += adjSum[n - 2 - i];
        }
        return maxScore - minScore;
    }
};