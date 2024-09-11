// You are given 2 numbers (n , m); the task is to find n√m (nth root of m).

class Solution{
	public:
	int NthRoot(int n, int m) {
	    if (m == 1) return 1;
	    
	    int low = 1, high = m;

	    while (low <= high) {
	        int mid = low + (high - low) / 2;

	        long long mid_pow = 1;
	        for (int i = 0; i < n; i++) {
	            mid_pow *= mid;
	            if (mid_pow > m) break;
	        }

	        if (mid_pow == m) {
	            return mid; 
	        }
	        else if (mid_pow < m) {
	            low = mid + 1;
	        } else {
	            high = mid - 1;
	        }
	    }
	    return -1;
	}
}; 
 