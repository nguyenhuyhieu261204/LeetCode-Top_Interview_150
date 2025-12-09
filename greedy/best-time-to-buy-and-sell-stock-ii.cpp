
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int curr = prices[0];
        for (int i=1; i<prices.size(); i++) {
            curr = min(curr, prices[i]);
            if (prices[i] > curr) {
                ans += prices[i] - curr;
                curr = prices[i];
            }
        }
        return ans;
    }
};