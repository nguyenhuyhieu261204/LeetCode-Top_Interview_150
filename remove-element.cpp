class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p1 = -1;
        int p2 = 0;
        int length = nums.size();
        while (p2 < length) {
            if (nums[p2] != val) {
                swap(nums[++p1], nums[p2]);
            }
            p2++;
        }   
        return p1+1;
    }
};