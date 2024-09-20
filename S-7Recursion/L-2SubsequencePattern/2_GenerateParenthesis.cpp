// https://leetcode.com/problems/generate-parentheses/description/  

class Solution {
public:

    void backtrack(int n , int open , int close, string current , vector<string>& result){
        if(current.length() == 2*n){
            result.push_back(current);
            return;
        }

        if(open < n) backtrack(n,open +1, close , current+ '(' , result);
        if(close < open) backtrack(n,open, close+1, current + ')' , result);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        backtrack(n,0,0,"",result);
        return result;
    }
}; 