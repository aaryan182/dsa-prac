// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        int windowSize = n - k;
 
        int currWindowSum = 0;
        for (int i = 0; i < windowSize; i++) {
            currWindowSum += cardPoints[i];
        }
        
        int minWindowSum = currWindowSum;
        for (int i = windowSize; i < n; i++) {
            currWindowSum += cardPoints[i] - cardPoints[i - windowSize];
            minWindowSum = min(minWindowSum, currWindowSum);
        }
        return totalSum - minWindowSum;
    }
};
