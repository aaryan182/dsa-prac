// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count_breaks = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            // Check if the current element is greater than the next element
            if (nums[i] > nums[(i + 1) % n]) {
                count_breaks++;
            }
            // If there is more than one break, return false
            if (count_breaks > 1) {
                return false;
            }
        }
        return true;
    }
};