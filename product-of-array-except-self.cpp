class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1(nums.begin(), nums.end());
        vector<int> nums2(nums.begin(), nums.end());
        for (int i=1; i<n; i++) {
            nums1[i] *= nums1[i-1];
        }
        for (int i=n-2; i>=0; i--) {
            nums2[i] *= nums2[i+1];
        }
        vector<int> ans(n);
        for (int i=0; i<n; i++) {
            int left = 1;
            int right = 1;
            if (i>0) left = nums1[i-1];
            if (i<n-1) right = nums2[i+1];
            ans[i] = left * right;
        }
        return ans;
    }
};