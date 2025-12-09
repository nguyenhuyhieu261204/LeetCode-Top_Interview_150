class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i=0; i<flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                bool l = (i == 0) || (flowerbed[i-1] == 0);
                bool r = (i == flowerbed.size() - 1) || (flowerbed[i+1] == 0);
                if (l && r) {
                    n --;
                    flowerbed[i] = 1;
                }
            }
        }
        return n <= 0;
    }
};