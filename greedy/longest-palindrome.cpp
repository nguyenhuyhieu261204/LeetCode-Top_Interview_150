class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c: s) {
            freq[c] ++;
        }
        int ans = 0;
        bool hasOdd = false;
        for (auto &p: freq) {
            if (p.second % 2 == 0) {
                ans += p.second;
            } else {
                ans += p.second - 1;
                hasOdd = true;
            }
        }
        return hasOdd ? ans + 1 : ans;
    }
};