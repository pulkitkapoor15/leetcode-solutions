class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long result = 0;
        int i = 0, j = nums.size() - 1;
        while (i < j) result += stoi(to_string(nums[i++]) + to_string(nums[j--]));
        if (i == j) result += nums[i];
        return result;
    }
};
