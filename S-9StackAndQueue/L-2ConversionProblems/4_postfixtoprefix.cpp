// https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1

class Solution {
  public:
    string postToPre(string post_exp) {
        stack<string> st;
        
        for(int i = 0; i<post_exp.size(); i++){
            char c = post_exp[i];
            if(isalnum(c)){
                string operand(1,c);
                st.push(operand);
            }
            else {
                string operand2 = st.top(); st.pop();
                string operand1 = st.top(); st.pop();
                
                string prefix = c + operand1 + operand2;
                st.push(prefix);
            }
        }
        return st.top();
    }
};