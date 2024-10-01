// https://www.geeksforgeeks.org/problems/prefix-to-postfix-conversion/1

class Solution {
  public:
    string preToPost(string pre_exp) {
        stack<string> st;
        int n = pre_exp.size();
        for(int i = n-1 ; i>=0; i--){
            char c = pre_exp[i];
            
            if(isalnum(c)){
                string operand(1,c);
                st.push(operand);
            }
            else{
                string operand1 = st.top(); st.pop();
                string operand2 = st.top(); st.pop();
                
                string postfix = operand1 + operand2 + c;
                st.push(postfix);
            }
        }
        return st.top();
    }
};