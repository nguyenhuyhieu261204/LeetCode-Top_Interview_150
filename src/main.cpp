#include "best_time_to_buy_and_sell_stock_II.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums = {7, 1, 5, 3, 6, 4};

  cout << "122. Best time to Buy and Sell Stock II" << endl;
  cout << "Input: " << endl;
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
  cout << "Output: " << maxProfitII(nums) << endl;

  return 0;
}