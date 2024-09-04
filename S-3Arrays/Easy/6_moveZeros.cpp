// https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;

        for (int current = 0; current < nums.size(); ++current) {
            if (nums[current] != 0) {
                nums[lastNonZeroFoundAt++] = nums[current];
            }
        }
        for (int i = lastNonZeroFoundAt; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};