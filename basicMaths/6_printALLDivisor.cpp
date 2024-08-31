// https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long result = 0;
        
        // Iterate from 1 to N
        for (int i = 1; i <= N; i++)
        {
            // Each number i contributes i * (N / i) to the final sum
            result += i * (N / i);
        }
        
        return result;
    }
};