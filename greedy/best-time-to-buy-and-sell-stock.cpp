class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int buy = prices[0];
        for (int price: prices) {
            ans = max(price-buy, ans);
            buy = min(buy, price);
        }
        return ans;
    }
};