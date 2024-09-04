// https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (int num : nums) {
            if (num == 1) {
                currentCount++;
            } else {
                maxCount = max(maxCount, currentCount);
                currentCount = 0;
            }
        }
        maxCount = max(maxCount, currentCount);
        return maxCount;
    }
};