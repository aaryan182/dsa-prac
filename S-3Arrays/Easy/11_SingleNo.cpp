// https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleno = 0; 
        for (int num : nums) {
            singleno ^= num; 
        }
        return singleno;
    }
};