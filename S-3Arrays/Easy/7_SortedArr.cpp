// https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1

class Solution {
public:
    int searchInSorted(int arr[], int N, int K) {
        int low = 0, high = N - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == K) {
                return 1;  
            }
            else if (arr[mid] > K) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return -1;
    }
};