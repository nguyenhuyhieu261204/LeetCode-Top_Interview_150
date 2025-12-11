class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int tenRemain = 0;
        int fiveRemain = 0;
        for (int money: bills) {
            if (money == 5) {
                fiveRemain ++;
            } else if (money == 10) {
                if (fiveRemain == 0) return false;
                fiveRemain --;
                tenRemain ++;
            } else {
                if (tenRemain > 0 && fiveRemain > 0) {
                    tenRemain --;
                    fiveRemain --;
                } else if (tenRemain == 0 && fiveRemain >= 3) {
                    fiveRemain -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};