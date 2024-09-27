// https://leetcode.com/problems/single-number/ 

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