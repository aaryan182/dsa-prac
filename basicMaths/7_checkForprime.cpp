// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        // If the array has only one element or is empty, no jumps needed
        if (n <= 1) return 0;
        
        // If the first element is 0, we can't move forward
        if (arr[0] == 0) return -1;
        
        int maxReach = arr[0]; // The farthest index we can reach
        int stepsLeft = arr[0]; // Steps we can take with current jump
        int jumps = 1; // We start with the first jump
        
        // Start from the second element
        for (int i = 1; i < n; i++) {
            // If we've reached the last index, return the number of jumps
            if (i == n - 1) return jumps;
            
            // Update the farthest index we can reach
            maxReach = max(maxReach, i + arr[i]);
            
            // Use up a step for this move
            stepsLeft--;
            
            // If no more steps left in this jump
            if (stepsLeft == 0) {
                // Must make a jump
                jumps++;
                
                // If we can't reach further than our current position, we're stuck
                if (i >= maxReach) return -1;
                
                // We can now take steps up to the farthest index we can reach
                // from our current position
                stepsLeft = maxReach - i;
            }
        }
        
        // This line should never be reached if the input is valid
        return -1;
    }
};