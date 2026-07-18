class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        int i = n-1;
        while (i >= 0 && nums[i]>=nums[i + 1]) i--;
        if (i >= 0) {
            int j = n;
            while (nums[j] <= nums[i]) j--;
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};
