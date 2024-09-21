// https://leetcode.com/problems/combination-sum/ 

class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& result, int start) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) {
                continue;
            }

            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], combination, result, i);
            combination.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, combination, result, 0);
        return result;
    }
};