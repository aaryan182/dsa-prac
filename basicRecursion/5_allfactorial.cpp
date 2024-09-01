// https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1

class Solution {
public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long factorial = 1;
        int i = 1;

        while (factorial <= n) {
            result.push_back(factorial);
            i++;
            factorial *= i;
        }

        return result;
    }
};