// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

class Solution {
public:
    bool canShipWithinDays(vector<int>& weights, int days, int capacity) {
        int currentWeight = 0;
        int daysNeeded = 1; 
        
        for (int weight : weights) {
            if (currentWeight + weight > capacity) {
               
                daysNeeded++;
                currentWeight = weight;
                if (daysNeeded > days) {
                    return false;
                }
            } else {
             
                currentWeight += weight;
            }
        }
        
        return true; 
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end()); 
        int high = accumulate(weights.begin(), weights.end(), 0);  

        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (canShipWithinDays(weights, days, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low; 
    }
};