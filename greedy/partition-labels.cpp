class Solution {
public:
    vector<int> partitionLabels(string str) {
        unordered_map<char, vector<int>> mp;
        for (int i = 0; i < str.length(); i++) {
            char c = str[i];
            if (!mp.count(c)) {
                mp[c] = {i, i};    
            } else {
                mp[c][1] = i;      
            }
        }

        vector<int> ans;
        int start = 0;
        int end = 0;
        for (int i = 0; i < str.length(); i++) {
            end = max(end, mp[str[i]][1]);
            if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }

        return ans;
    }
};
