//https://www.geeksforgeeks.org/problems/odd-or-even3618/1

class Solution {
  public:
    string oddEven(int n) {
         return (n & 1) == 0 ? "even" : "odd";
    }
};