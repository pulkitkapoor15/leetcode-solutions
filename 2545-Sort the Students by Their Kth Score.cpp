class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector <int> col;
        for (int i = 0; i < score.size(); i++) {
            col.push_back(score[i][k]);
        }
        sort(col.begin(), col.end(), greater<int>());
        vector < vector <int> > sorted(score.size(), vector <int>(score[0].size()));
        for (int i = 0; i < score.size(); i++) {
            int present = score[i][k];
            for (int j = 0; j < col.size(); j++) {
                if (col[j] == present) {
                    sorted[j] = score[i];
                    break;
                }
            }
        }
        return sorted;
    }
};