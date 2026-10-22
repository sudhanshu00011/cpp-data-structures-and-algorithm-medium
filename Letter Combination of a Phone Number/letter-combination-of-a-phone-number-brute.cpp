class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> ans = {""};
        string mp[] = {"", "", "abc", "def", "ghi", "jkl",
                       "mno", "pqrs", "tuv", "wxyz"};
        for (char d : digits) {
            vector<string> temp;
            for (string s : ans) {
                for (char c : mp[d - '0']) {
                    temp.push_back(s + c);
                }
            }
            ans = temp;
        }
        return ans;
    }
};
