class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m + n - 1;
        int p1 = m - 1;      
        int p2 = n - 1;
        while (p >= 0) {
            int val1 = INT_MIN;
            int val2 = INT_MIN;
            if (p1 >= 0) {
                val1 = nums1[p1];
            }
            if (p2 >= 0) {
                val2 = nums2[p2];
            }
            if (val1 > val2) {
                nums1[p--] = val1;
                p1 --;
            } else {
                nums1[p--] = val2;
                p2 --;
            }
        }
    }
};