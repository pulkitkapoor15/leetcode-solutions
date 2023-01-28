#define ll long long
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector <pair<int, int>> pairs;
        for(int i = 0; i < nums1.size(); i++)
            pairs.push_back(make_pair(nums2[i], nums1[i]));
        sort(pairs.rbegin() , pairs.rend());
        ll ans = 0, sum = 0;
        priority_queue<int> pq;
        for(int i = 0; i < k - 1; i++) {
            sum += pairs[i].second;
            pq.push(-pairs[i].second);
        }
        for(int i = k - 1; i < nums1.size(); i++) {
            sum += pairs[i].second;
            pq.push(-pairs[i].second);
            ans = max(ans, sum * pairs[i].first);
            sum += pq.top();
            pq.pop();
        }
        return ans;
    }
};