// https://leetcode.com/problems/subsets/description/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsetCount = 1 << n; 
        vector<vector<int>> result;

        for (int i = 0; i < subsetCount; i++) {
            vector<int> currentSubset;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) { 
                    currentSubset.push_back(nums[j]);
                }
            }
            result.push_back(currentSubset);
        }
        return result;
    }
};