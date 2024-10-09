// https://leetcode.com/problems/subarrays-with-k-different-integers/

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int K) {
        return atMostK(nums, K) - atMostK(nums, K - 1);
    }

    int atMostK(vector<int>& nums, int K) {
        unordered_map<int, int> count;
        int left = 0, result = 0;
        
        for (int right = 0; right < nums.size(); ++right) {
            if (count[nums[right]] == 0) {
                K--;
            }
            count[nums[right]]++;

            while (K < 0) {
                count[nums[left]]--;
                if (count[nums[left]] == 0) {
                    K++;
                }
                left++;
            }
            result += right - left + 1;
        }
        return result;
    }
};
