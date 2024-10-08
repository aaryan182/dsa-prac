// https://leetcode.com/problems/count-number-of-nice-subarrays/

class Solution {
public:
    int atMostKOdd(vector<int>& nums, int k) {
        int left = 0, count = 0, oddCount = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2 != 0) {
                oddCount++;
            }
            while (oddCount > k) {
                if (nums[left] % 2 != 0) {
                    oddCount--;
                }
                left++;
            }
            count += (right - left + 1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMostKOdd(nums, k) - atMostKOdd(nums, k - 1);
    }
};
