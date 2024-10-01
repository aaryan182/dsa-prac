// https://www.geeksforgeeks.org/problems/prefix-to-infix-conversion/1


class Solution {
  public:
    string preToInfix(string pre_exp) {
        stack<string> st;
        int n = pre_exp.size();
        for(int i = n-1; i>= 0; i--){
            char c = pre_exp[i];
            if(isalnum(c)){
                string op(1,c);
                st.push(op);
            }
            else{
                string operand1 = st.top();
                st.pop();
                string operand2 = st.top();
                st.pop();
                
                string infix = "(" + operand1 + c + operand2 + ")";
                st.push(infix);
            }
        }
        return st.top();
    }
};