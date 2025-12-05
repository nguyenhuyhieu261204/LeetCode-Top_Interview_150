class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        k = k % length;
        if (k == 0) return;
        vector<int> tmp(length);
        for (int i=0; i<length; i++) {
            tmp[(i + k) % length] = nums[i];
        }
        nums = tmp;
    }
};