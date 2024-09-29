// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracketPairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(char c: s){
            if(bracketPairs.count(c)){
                char topELement = st.empty() ? '#': st.top();
                if(topELement == bracketPairs[c]) st.pop();
                else return false;
            }
            else st.push(c);
        }
            return st.empty();
    }
};