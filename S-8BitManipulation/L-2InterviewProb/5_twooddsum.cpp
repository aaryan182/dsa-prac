// https://www.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1

class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
            long long int xorResult = 0;
        
        for (long long int i = 0; i < N; i++) {
            xorResult ^= Arr[i];
        }
   
        long long int setBit = xorResult & ~(xorResult - 1);
        
        long long int x = 0, y = 0;

        for (long long int i = 0; i < N; i++) {
            if (Arr[i] & setBit) {
                x ^= Arr[i]; 
            } else {
                y ^= Arr[i];  
            }
        }
        if (x > y) {
            return {x, y};
        } else {
            return {y, x};
        }
    }
};