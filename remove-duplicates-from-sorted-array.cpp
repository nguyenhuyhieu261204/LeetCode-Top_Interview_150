class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1 = 0;
        int p2 = 1;
        int length = nums.size();
        while (p2 < length) {
            if (nums[p2] != nums[p1]) {
                swap(nums[++p1], nums[p2]);
            }
            p2++;
        }
        return p1 + 1;
    }
};