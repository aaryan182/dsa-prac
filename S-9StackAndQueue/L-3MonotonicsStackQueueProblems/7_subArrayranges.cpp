// https://leetcode.com/problems/sum-of-subarray-ranges/description/

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long result = 0;

        stack<int> s;
        for (int i = 0; i <= n; i++) {
            while (!s.empty() && (i == n || nums[s.top()] < nums[i])) {
                int idx = s.top();
                s.pop();
                int left = s.empty() ? -1 : s.top();
                result += (long long)nums[idx] * (idx - left) * (i - idx);
            }
            s.push(i);
        }

        while (!s.empty()) s.pop();
        for (int i = 0; i <= n; i++) {
            while (!s.empty() && (i == n || nums[s.top()] > nums[i])) {
                int idx = s.top();
                s.pop();
                int left = s.empty() ? -1 : s.top();
                result -= (long long)nums[idx] * (idx - left) * (i - idx);
            }
            s.push(i);
        }
        return result;
    }
};