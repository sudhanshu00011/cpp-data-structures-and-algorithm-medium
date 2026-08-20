class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1;
        int i=0;
        int h;
        while(i<=m) {
            int j=0;
            int midm=(i+m)/2;
            int n=matrix[0].size()-1;
            while (j<=n) {
                int midn=(j+n)/2;
                if (matrix[midm][midn] == target) return true;
                else if (matrix[midm][midn] > target) n=midn-1;
                else j=midn+1;
            }
            if (matrix[midm][0] > target) m=midm-1;
            else i=midm+1;
        }
        return false;
    }
};
