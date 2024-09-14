// https://leetcode.com/problems/find-a-peak-element-ii/description/

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int left = 0, right = n - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;

            int maxRow = 0;
            for (int i = 0; i < m; ++i) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            int midVal = mat[maxRow][mid];
            int leftVal = (mid > 0) ? mat[maxRow][mid - 1] : -1;
            int rightVal = (mid < n - 1) ? mat[maxRow][mid + 1] : -1;
            
            if (midVal > leftVal && midVal > rightVal) {
                return {maxRow, mid};
            } else if (midVal < rightVal) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return {-1, -1};  
    }
};