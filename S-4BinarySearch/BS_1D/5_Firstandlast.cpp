// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); 

        int first = findFirstPosition(nums, target);
        if (first == -1) {
            return result;  
        }
        
        int last = findLastPosition(nums, target);
        result[0] = first;
        result[1] = last;

        return result;
    }
    
private:
    
    int findFirstPosition(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int first = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                first = mid;  
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;  
            } else {
                right = mid - 1;  
            }
        }
        return first;
    }

    int findLastPosition(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int last = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                last = mid;  
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        return last;
    }
};