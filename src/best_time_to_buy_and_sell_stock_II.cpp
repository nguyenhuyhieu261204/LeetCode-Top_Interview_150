#include "best_time_to_buy_and_sell_stock_II.h"
#include <vector>

int maxProfitII(std::vector<int> &prices) {
  int loiNhuan = 0;
  int loiNhuanCuoi = 0;
  int giaMua = prices[0];
  for (int price : prices) {
    giaMua = std::min(giaMua, price);
    loiNhuan = price - giaMua;
    if (loiNhuan > 0) {
      loiNhuanCuoi += loiNhuan;
      giaMua = price;
    }
  }
  return loiNhuanCuoi;
}