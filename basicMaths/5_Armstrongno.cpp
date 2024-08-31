// https://leetcode.com/problems/armstrong-number/description/

class Solution {
public:
    bool isArmstrong(int n) {
        // Store the original number
        int original = n;
        
        // Count the number of digits
        int numDigits = 0;
        int temp = n;
        while (temp > 0) {
            numDigits++;
            temp /= 10;
        }
        
        // Calculate the sum of digits raised to the power of numDigits
        long long sum = 0;
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }
        
        // Check if the sum equals the original number
        return sum == original;
    }
};