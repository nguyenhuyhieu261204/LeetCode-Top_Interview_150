class Solution {
public:
    int jump(vector<int>& nums) {
        int buoc = 0;
        int xaNhat = 0;
        int VTKetthuc = 0;
        for (int i=0; i<nums.size()-1; i++) {
            xaNhat = max(xaNhat, i+nums[i]);
            if (i == VTKetthuc) {
                buoc ++;
                VTKetthuc = xaNhat;
            }
        }
        return buoc;
    }
}; 