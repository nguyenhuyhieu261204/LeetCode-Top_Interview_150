#include "remove_element.h"
#include <vector>

int removeElement(std::vector<int> &nums, int val) {
  int prev = -1;
  int curr = 0;
  int length = nums.size();
  while (curr < length) {
    if (nums[curr] != val) {
      std::swap(nums[curr], nums[++prev]);
    }
    curr++;
  }
  return prev + 1;
}