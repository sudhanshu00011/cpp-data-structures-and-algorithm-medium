class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int start, int target, vector<int>& candidates, vector<int>& curr) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (start >= candidates.size()) return;
        if (candidates[start] <= target) {
            curr.push_back(candidates[start]);
            backtrack(start, target - candidates[start], candidates, curr); // reuse same element
            curr.pop_back();
        }
        backtrack(start+1, target, candidates, curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(0, target, candidates, curr);
        return ans;
    }
};
