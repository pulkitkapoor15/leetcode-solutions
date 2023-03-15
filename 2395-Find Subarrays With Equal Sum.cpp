class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map <int, int> present;
        for (int i = 0; i < nums.size() - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            if (present.find(sum) != present.end()) return true;
            present[sum] = true;
        }
        return false;
    }
};
