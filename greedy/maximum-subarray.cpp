class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;
        for (int num: nums) {
            sum = max(num, sum + num);
            ans = max(sum, ans);
        }
        return ans;
    }
};