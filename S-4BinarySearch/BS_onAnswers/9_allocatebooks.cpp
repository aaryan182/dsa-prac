// https://www.naukri.com/code360/problems/allocate-books_1090540

class Solution {
public:
    bool isPossible(vector<int>& arr, int n, int m, int mid) {
        int studentCount = 1; 
        int currentPages = 0;  
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) return false;  
            
            if (currentPages + arr[i] > mid) {
                studentCount++;
                currentPages = arr[i];  
                if (studentCount > m) return false;  
            } else {
                currentPages += arr[i];
            }
        }
        return true;  
    }
    
    int findPages(vector<int>& arr, int n, int m) {
        if (m > n) return -1; 
        
        int low = *max_element(arr.begin(), arr.end());  
        int high = accumulate(arr.begin(), arr.end(), 0);  
        int result = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;  
            
            if (isPossible(arr, n, m, mid)) {
                result = mid;  
                high = mid - 1;  
            } else {
                low = mid + 1;  
            }
        }
        
        return result;
    }
};