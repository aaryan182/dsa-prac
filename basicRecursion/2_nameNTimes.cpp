//https://www.geeksforgeeks.org/problems/print-gfg-n-times/1

class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N == 0) return;
        printGfg(N - 1);
        cout<<"GFG" <<" ";
    }
};