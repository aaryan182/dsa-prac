// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution {
public:
    bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int mid) {
        int bouquets = 0;
        int flowers = 0;

        for (int day : bloomDay) {
            if (day <= mid) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0; 
                }
            } else {
                flowers = 0;
            }
            
            if (bouquets >= m) {
                return true; 
            }
        }

        return bouquets >= m; 
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowersNeeded = (long long)m * k;  
        if (bloomDay.size() < totalFlowersNeeded) {
            return -1;  
        }

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

       
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canMakeBouquets(bloomDay, m, k, mid)) {
                high = mid;  
            } else {
                low = mid + 1; 
            }
        }
        return low;
    }
};