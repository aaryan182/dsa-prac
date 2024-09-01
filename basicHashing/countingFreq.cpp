// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

class Solution {
public:
    void frequencyCount(vector<int>& arr, int N, int P) {
        unordered_map<int, int> freq;

        for (int i = 0; i < N; ++i) {
            if (arr[i] <= N) {
                freq[arr[i]]++;
            }
        }
        for (int i = 1; i <= N; ++i) {
            arr[i-1] = freq[i];
        }
    }
};