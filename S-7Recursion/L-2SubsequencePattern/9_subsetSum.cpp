// https://www.geeksforgeeks.org/problems/subset-sums2234/1

class Solution {
  public:
    void subsetSumsHelper(vector<int>& arr, int index, int currentSum, vector<int>& result) {
        if (index == arr.size()) {
            result.push_back(currentSum);
            return;
        }
        subsetSumsHelper(arr, index + 1, currentSum + arr[index], result);
        subsetSumsHelper(arr, index + 1, currentSum, result);
    }

    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> result;
        subsetSumsHelper(arr, 0, 0, result);
        return result;
    }
};