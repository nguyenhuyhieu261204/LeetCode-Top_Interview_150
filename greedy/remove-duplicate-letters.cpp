class Solution {
public:
    string removeDuplicateLetters(string str) {
        unordered_map<char, int> freq;
        unordered_map<char, bool> hasSeen;
        for (char c: str) {
            freq[c] ++;
            hasSeen[c] = false;
        }
        stack<char> stk;
        for (char c: str) {
            freq[c] --;
            if (hasSeen[c]) continue;
            while (!stk.empty() && stk.top() > c && freq[stk.top()] > 0) {
                hasSeen[stk.top()] = false;
                stk.pop();
            }
            stk.push(c);
            hasSeen[c] = true;
        }
        string ans;
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};