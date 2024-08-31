// https://www.geeksforgeeks.org/problems/count-digits5716/1

class Solution{
public:
    int evenlyDivides(int N) {
        int count = 0;
        int original = N;
        
        while (N > 0) {
            int lastDigit = N % 10;
            if (lastDigit != 0 && original % lastDigit == 0) {
                count++;
            }
            N = N / 10;
        }
        
        return count;
    }
};