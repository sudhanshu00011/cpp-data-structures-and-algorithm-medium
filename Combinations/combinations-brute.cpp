class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int start, int n, int k, vector<int>& curr) {
        if (curr.size() == k) {
            ans.push_back(curr);
            return;
        }
        if (start > n) return;
        if (start <= n - (k - curr.size()) + 1) {
            curr.push_back(start);
            backtrack(start + 1, n, k, curr);
            curr.pop_back();
        }
        backtrack(start + 1, n, k, curr);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;
        backtrack(1, n, k, curr);
        return ans;
    }
};
