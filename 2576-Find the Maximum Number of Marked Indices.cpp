class Solution {
public:

    /*
    3,5,2,4
    2,3,4,5
    
    (2,4) => 
    2,5

    9,2,5,4
    sort => 2,4,5,9
    
    2 => 5
    4 => 9
    
    2

    */
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int i = 0, n = nums.size();
        sort(begin(nums), end(nums));
        for (int j = n - n / 2; j < n; ++j)
            i += 2 * nums[i] <= nums[j];
        return i * 2;
    }
};
