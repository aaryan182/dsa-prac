// https://www.geeksforgeeks.org/problems/square-root/0

class Solution {
  public:
    long long int floorSqrt(long long int n) {
        if (n == 0 || n == 1) return n;

        long long int low = 1, high = n, result = 0;

        while (low <= high) {
            long long int mid = low + (high - low) / 2;

   
            if (mid * mid == n) {
                return mid;
            }

            else if (mid * mid < n) {
                result = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return result;
    }
};