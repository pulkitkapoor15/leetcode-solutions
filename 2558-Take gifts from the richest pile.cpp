class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        while (k > 0) {
            int front = pq.top();
            int sq = sqrt(front);
            pq.pop();
            pq.push(sq);
            k--;
        }
        long long sum = 0;
        while (pq.size() > 0) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};
