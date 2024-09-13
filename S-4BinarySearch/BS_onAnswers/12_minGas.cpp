// https://leetcode.com/problems/minimize-max-distance-to-gas-station/description/

class Solution {
public:
    bool possible(vector<int>& stations, int K, double dist) {
        int count = 0;
        for (int i = 1; i < stations.size(); i++) {
            count += (int)((stations[i] - stations[i - 1]) / dist);
            if (count > K) return false;
        }
        return true;
    }

    double minmaxGasDist(vector<int>& stations, int K) {
        double low = 0.0, high = 1e8, mid;
        while (high - low > 1e-6) {
            mid = (low + high) / 2.0;
            if (possible(stations, K, mid)) {
                high = mid;
            } else {
                low = mid;
            }
        }
        return low;
    }
};