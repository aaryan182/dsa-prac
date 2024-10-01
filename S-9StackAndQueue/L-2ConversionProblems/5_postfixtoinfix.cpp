// https://www.geeksforgeeks.org/problems/postfix-to-infix-conversion/1

class Solution {
  public:
    string postToInfix(string exp) {
        stack<string> st;
        for (int i = 0; i < exp.size(); i++) {
            char ch = exp[i];
            if (isalnum(ch)) {
                st.push(string(1, ch));
            } 
            else {
                string operand2 = st.top(); st.pop();
                string operand1 = st.top(); st.pop();
                string newExpr = "(" + operand1 + ch + operand2 + ")";
                st.push(newExpr);
            }
        }
        return st.top();
    }
};