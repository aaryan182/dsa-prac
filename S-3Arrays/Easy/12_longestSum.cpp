// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

class Solution{
    public:
    int lenOfLongSubarr(int A[], int N, int K) { 
        unordered_map<int, int> prefixSumMap;
        int prefixSum = 0;
        int maxLength = 0;

        for (int i = 0; i < N; i++) {
            prefixSum += A[i];
            
            if (prefixSum == K) {
                maxLength = i + 1;
            }
            if (prefixSumMap.find(prefixSum - K) != prefixSumMap.end()) {
                maxLength = max(maxLength, i - prefixSumMap[prefixSum - K]);
            }

            if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
                prefixSumMap[prefixSum] = i;
            }
        }

        return maxLength;
    } 
};