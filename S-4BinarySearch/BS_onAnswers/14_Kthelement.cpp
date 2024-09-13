// https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1

class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size();
        int n2 = arr2.size();

        if (n1 > n2) {
            return kthElement(k, arr2, arr1);
        }

        int low = max(0, k - n2), high = min(k, n1);

        while (low <= high) {
            int partition1 = (low + high) / 2;
            int partition2 = k - partition1;
            
            int maxLeft1 = (partition1 == 0) ? INT_MIN : arr1[partition1 - 1];
            int minRight1 = (partition1 == n1) ? INT_MAX : arr1[partition1];
            
            int maxLeft2 = (partition2 == 0) ? INT_MIN : arr2[partition2 - 1];
            int minRight2 = (partition2 == n2) ? INT_MAX : arr2[partition2];
            
            // Correct partition
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                return max(maxLeft1, maxLeft2);
            } else if (maxLeft1 > minRight2) {
                high = partition1 - 1;
            } else {
                low = partition1 + 1;
            }
        }

        throw invalid_argument("Input is invalid");
    }
};