// https://leetcode.com/problems/kth-missing-positive-number/description/ 

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0, right = arr.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int missingCount = arr[mid] - (mid + 1); 
            
            if (missingCount < k) {
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        return left + k;
    }
};