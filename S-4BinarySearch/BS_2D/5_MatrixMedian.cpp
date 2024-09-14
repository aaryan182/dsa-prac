// https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

class Solution{   
public:
    int countSmallerThanOrEqualToMid(vector<int>& row, int mid) {
        int l = 0, h = row.size() - 1;
        while (l <= h) {
            int m = l + (h - l) / 2;
            if (row[m] <= mid) {
                l = m + 1;
            } else {
                h = m - 1;
            }
        }
        return l;
    }

    int median(vector<vector<int>>& matrix, int R, int C) {
        int low = matrix[0][0], high = matrix[R-1][C-1];
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int count = 0;

            for (int i = 0; i < R; ++i) {
                count += countSmallerThanOrEqualToMid(matrix[i], mid);
            }
            
            if (count < (R * C + 1) / 2) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return low; 
    }
};