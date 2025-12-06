class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr = nums[0];
        for (int i=0; i<nums.size(); i++) {
            curr = max(curr, nums[i]);
            if (curr == 0 && i < nums.size() - 1) return false; 
            curr --;
        }
        return true;
    }
};