// https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1

class Solution{
const int MOD = 1e9 + 7;

public:
    int perfectSum(int arr[], int n, int sum) {
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                dp[i][j] = dp[i - 1][j];
                if (arr[i - 1] <= j) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - arr[i - 1]]) % MOD;
                }
            }
        }
        return dp[n][sum];
    }
};