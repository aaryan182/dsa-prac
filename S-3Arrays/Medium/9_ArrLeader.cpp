// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> result;
        int max_from_right = arr[n-1];
        result.push_back(max_from_right); 
     
        for (int i = n-2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                result.push_back(arr[i]);
                max_from_right = arr[i];
            }
        }
        reverse(result.begin(), result.end());
        
        return result;
    }
};