// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/

class Solution {
public:
    int computeSum(vector<int>& nums, int divisor) {
        int total = 0;
        for (int num : nums) {
            total += (num + divisor - 1) / divisor;
        }
        return total;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1;
        int high = *max_element(nums.begin(), nums.end()); 
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            int sum = computeSum(nums, mid);
            
            if (sum > threshold) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};