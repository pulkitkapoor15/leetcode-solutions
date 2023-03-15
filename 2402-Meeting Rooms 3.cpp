class Solution {
public:

    /*
    N = 3
    1,20 => 0
    2,10 => 1
    3,5 => 2
    4,9 => [5, 10) => 2
    6,8 => [10, 12) => 1



    */



    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());    
        priority_queue<pair<long long, int> , vector <pair <long long, int> > , greater<pair<long long, int>>> engaged;
        priority_queue<int , vector <int> , greater<int> > unused;
        map <int, int> freq;
        for (int i = 0; i < n; i++) {
            unused.push(i);
        }
        for (vector <int> x: meetings) {
            int start = x[0], end = x[1];
            while (engaged.size() > 0 and engaged.top().first <= start) {
                int room = engaged.top().second;
                engaged.pop();
                unused.push(room);
            }
            if (unused.size() > 0) {
                int room = unused.top();
                unused.pop();
                freq[room] += 1;
                engaged.push({end, room});
            } else {
                pair <long long, int> topmost = engaged.top();
                engaged.pop();
                freq[topmost.second] += 1;
                long long newend = topmost.first;
                newend += (end - start);
                engaged.push({newend, topmost.second});
            }
        }
        int maxi = 0;
        for (int i = 1; i < n; i++) {
            if (freq[i] > freq[maxi]) maxi = i;
        }
        return maxi;
    }
};
