class Solution {
public:
    vector<string> ans;
    string mp[10] = {"", "", "abc", "def", "ghi", "jkl",
                     "mno", "pqrs", "tuv", "wxyz"};
    void solve(string &digits, int idx, string curr) {
        if (idx == digits.size()) {
            ans.push_back(curr);
            return;
        }
        for (char c : mp[digits[idx] - '0']) solve(digits, idx + 1, curr + c);
    }
    vector<string> letterCombinations(string digits) {
        solve(digits, 0, "");
        return ans;
    }
};
