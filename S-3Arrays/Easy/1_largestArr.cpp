// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0

class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        // code here
        int largestno = arr[0];
        for(int i = 0; i<n; i++){
            if(arr[i] > largestno) largestno = arr[i];
        }
        return largestno;
    }
};