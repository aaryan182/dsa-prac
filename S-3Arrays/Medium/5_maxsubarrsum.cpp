// https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0

class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) {
            return -1;
        }

        int maxSum = arr[0] + arr[1];  

       
        for (int i = 1; i < n - 1; i++) {
            int currentSum = arr[i] + arr[i + 1];  
            maxSum = max(maxSum, currentSum); 
        }

        return maxSum;  
    }
};