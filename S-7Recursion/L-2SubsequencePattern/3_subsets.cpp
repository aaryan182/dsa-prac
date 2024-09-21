// https://leetcode.com/problems/subsets/description/

class Solution {
public:

    void backtrack(vector<int>& nums, vector<int>& currentSubset, int index, vector<vector<int>>& result){
        result.push_back(currentSubset);
        for(int i = index; i<nums.size(); i++){
            currentSubset.push_back(nums[i]);
            backtrack(nums,currentSubset, i+1, result);
            currentSubset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentSubset;
        backtrack(nums, currentSubset, 0, result);
        return result;
    }
};