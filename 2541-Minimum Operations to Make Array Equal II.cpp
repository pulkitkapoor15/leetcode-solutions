#define ll long long
class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        ll result = 0, dec = 0, inc = 0;
        int n = (int)nums1.size();
        for (int i = 0; i < n; i++) {
            if (k == 0) {
                if (nums1[i] != nums2[i]) return -1;
            } else {
                if (abs(nums1[i] - nums2[i]) % k == 0) {
                    if (nums1[i] < nums2[i]) inc += (nums2[i] - nums1[i]) / k;
                    else dec += (nums1[i] - nums2[i]) / k;
                } else {
                    return -1;
                }
            }
        }
        if (inc != dec) return -1;
        return inc;
    }
};