// https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    int totalHoursAtSpeed(const vector<int>& piles, int k) {
        int hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;  
        int high = *max_element(piles.begin(), piles.end());  

        while (low < high) {
            int mid = low + (high - low) / 2;
            int hoursNeeded = totalHoursAtSpeed(piles, mid);
            
            if (hoursNeeded <= h) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};