// https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> isPrime(n,true);
        isPrime[0] = isPrime[1] = false;

        for(int i = 2; i*i < n; i++){
            if(isPrime[i]){
                for(int j = i*i; j<n; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        int primeCount = 0;
        for(int i =2; i<n; i++){
            if(isPrime[i]) primeCount++;
        }
        return primeCount;
    }
};