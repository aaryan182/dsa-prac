//https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        long long windowSum = 0;
        int left = 0;
        int maxFreq = 0;
        for (int right = 0; right < nums.size(); right++) {
            windowSum += nums[right];
            while ((long long)(right - left + 1) * nums[right] - windowSum > k) {
                windowSum -= nums[left];
                left++;
            }
            maxFreq = max(maxFreq, right - left + 1);
        }
        return maxFreq;
    }
};