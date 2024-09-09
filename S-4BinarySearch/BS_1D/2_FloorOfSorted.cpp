// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution {
  public:
    int findFloor(vector<long long> &v, long long n, long long x) {
        int left = 0;
        int right = n - 1;
        int result = -1;  
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (v[mid] == x) {
                return mid;  
            }
            else if (v[mid] < x) {
                result = mid;  
                left = mid + 1;  
            }
            else {
                right = mid - 1;  
            }
        }
        
        return result; 
    }
};