#include "remove_duplicates_from_sorted_array.h"
#include <vector>

int removeDuplicates(std::vector<int> &nums) {
  int prev = 0;
  int curr = 1;
  int length = nums.size();
  while (curr < length) {
    if (nums[prev] != nums[curr]) {
      std::swap(nums[++prev], nums[curr]);
    }
    curr++;
  }
  return prev + 1;
}