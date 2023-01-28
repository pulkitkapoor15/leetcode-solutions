class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int pt1 = 0, pt2 = 0;
        while (pt1 < nums1.size()) {
            int num = nums1[pt1];
            while (pt2 < nums2.size() and nums2[pt2] <= num) {
                if (nums1[pt1] == nums2[pt2]) return nums1[pt1];
                pt2++;
            }
            pt1++;
        }
        return -1;
    }
};