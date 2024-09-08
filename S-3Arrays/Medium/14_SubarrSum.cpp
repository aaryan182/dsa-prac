// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_map; 
        int prefix_sum = 0;
        int count = 0;
        
        prefix_map[0] = 1;
        
        for (int num : nums) {
            prefix_sum += num;
          
            if (prefix_map.find(prefix_sum - k) != prefix_map.end()) {
                count += prefix_map[prefix_sum - k];
            }

            prefix_map[prefix_sum]++;
        }
        
        return count;
    }
};