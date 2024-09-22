// https://leetcode.com/problems/combination-sum-iii/description/

class Solution {
public:
    void backtrack(int start, int k, int n, vector<int>& combination, vector<vector<int>>& result) {
        if (combination.size() == k && n == 0) {
            result.push_back(combination);
            return;
        }
        if (combination.size() > k || n < 0) {
            return;
        }
        for (int i = start; i <= 9; i++) {
            combination.push_back(i);
            backtrack(i + 1, k, n - i, combination, result);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> combination;
        backtrack(1, k, n, combination, result);
        return result;
    }
};