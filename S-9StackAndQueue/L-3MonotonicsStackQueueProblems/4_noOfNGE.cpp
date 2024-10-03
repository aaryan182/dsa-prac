// https://www.geeksforgeeks.org/problems/number-of-nges-to-the-right/1 

class Solution{
public:
    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices){
        vector<int> result(queries); 
        
        for (int i = 0; i < queries; ++i) {
            int currentIndex = indices[i];  
            int currentElement = arr[currentIndex];  
            int count = 0;  
            for (int j = currentIndex + 1; j < n; ++j) {
                if (arr[j] > currentElement) {
                    count++; 
                }
            }
            
            result[i] = count;  
        }
        
        return result;  
    }

};