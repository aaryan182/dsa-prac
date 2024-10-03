// https://leetcode.com/problems/asteroid-collision/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int ast : asteroids){
            bool exploded = false;
            while(!st.empty() && st.top() > 0 && ast < 0){
                int topAst = st.top();
                if(abs(ast) > topAst) st.pop();
                else if(abs(ast) == topAst){
                    st.pop();
                    exploded = true;
                    break;
                }
                else{
                    exploded = true;
                    break;
                }
            }
            if(!exploded){
                st.push(ast);
            }
        }
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};