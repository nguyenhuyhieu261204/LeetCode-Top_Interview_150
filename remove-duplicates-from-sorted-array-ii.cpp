class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if(length<2){
            return length;
        }
        int p1 = 2;
        for (int p2 = 2; p2<length; p2++) {
            if (nums[p1-2] != nums[p2]) {
                nums[p1++] = nums[p2];
            }
        }
        return p1;
    }
};