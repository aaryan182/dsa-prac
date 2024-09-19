// https://leetcode.com/problems/count-good-numbers/

class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modExp(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long e = (n + 1) / 2;
        long long o = n / 2;

        long long powerEven = modExp(5, e, MOD);
        long long powerOdd = modExp(4, o, MOD);
        return (powerEven * powerOdd) % MOD;
    }
};