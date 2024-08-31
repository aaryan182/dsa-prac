// https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

class Solution {
public:
    long long gcd(long long a, long long b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> result(2);
        
        // Calculate GCD using Euclidean algorithm
        long long gcdValue = gcd(A, B);
        
        // Calculate LCM using the formula: LCM(a,b) = (a*b)/GCD(a,b)
        long long lcmValue = (A / gcdValue) * B;  // Avoid potential overflow
        
        // Store LCM and GCD in the result vector
        result[0] = lcmValue;
        result[1] = gcdValue;
        
        return result;
    }
};