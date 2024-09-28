// https://www.geeksforgeeks.org/problems/all-divisors-of-a-number/1

class Solution {
  public:
    void print_divisors(int n) {
        vector<int> smallDivisors;  
        vector<int> largeDivisors;  
        
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                smallDivisors.push_back(i);  
                if (i != n / i) {
                    largeDivisors.push_back(n / i);  
                }
            }
        }
        for (int divisor : smallDivisors) {
            cout << divisor << " ";
        }
        for (int i = largeDivisors.size() - 1; i >= 0; i--) {
            cout << largeDivisors[i] << " ";
        }
        cout << endl;
    }
};