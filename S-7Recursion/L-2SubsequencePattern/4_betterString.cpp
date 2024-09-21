// https://www.geeksforgeeks.org/problems/better-string/1

class Solution {
  public:
  
    int countDistinctSubsequences(string s){
        int n = s.size();
        vector<long long> dp(n+1, 0);
        dp[0] = 1;
        
        vector<int> last(256,-1);
        
        const int MOD = 1e9 + 7;
        
        for(int i = 1; i<=n; i++){
            dp[i] = (2 * dp[i-1] % MOD);
            
            if(last[s[i-1]] != -1){
                dp[i] = (dp[i] - dp[last[s[i-1]]] + MOD) % MOD;
            }
            last[s[i-1]] = i-1;
        }
        return dp[n] % MOD;
    }
    string betterString(string str1, string str2) {
       int count1= countDistinctSubsequences(str1);
       int count2 = countDistinctSubsequences(str2);
       
       if(count1 > count2) return str1;
       else if(count2 > count1) return str2;
       else return str1;
    }
};