// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

class Solution{
public:
    int count(int arr[], int n, int x) {
     
        int first = findFirstOccurrence(arr, n, x);
        if (first == -1) {
            return 0; 
        }
 
        int last = findLastOccurrence(arr, n, x);
  
        return last - first + 1;
    }
    
private:

    int findFirstOccurrence(int arr[], int n, int x) {
        int left = 0, right = n - 1;
        int first = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == x) {
                first = mid;  
                right = mid - 1;  
            } else if (arr[mid] < x) {
                left = mid + 1;  
            } else {
                right = mid - 1; 
            }
        }
        
        return first;
    }

    int findLastOccurrence(int arr[], int n, int x) {
        int left = 0, right = n - 1;
        int last = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == x) {
                last = mid; 
                left = mid + 1;  
            } else if (arr[mid] < x) {
                left = mid + 1;  
            } else {
                right = mid - 1; 
            }
        }
        
        return last;
    }
};