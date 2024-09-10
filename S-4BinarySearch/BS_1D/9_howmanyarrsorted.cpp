// https://www.geeksforgeeks.org/problems/rotation4723/1

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
  
            if (arr[mid] > arr[right]) {
                left = mid + 1;
            }

            else {
                right = mid;
            }
        }

        return left;
    }
};