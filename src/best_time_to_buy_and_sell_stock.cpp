#include "best_time_to_buy_and_sell_stock.h"
#include <vector>

int maxProfit(std::vector<int> &prices) {
  int giaMua = prices[0];
  int laiCaoNhat = 0;
  for (int price : prices) {
    giaMua = std::min(giaMua, price);
    laiCaoNhat = std::max(laiCaoNhat, price - giaMua);
  }
  return laiCaoNhat;
}
