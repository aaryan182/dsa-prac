// https://www.naukri.com/code360/problems/subset-sum_630213

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    vector<bool> dp(k + 1, false);

    dp[0] = true;

    for (int i = 0; i < n; i++) {
        for (int j = k; j >= a[i]; j--) {
            dp[j] = dp[j] || dp[j - a[i]];
        }
    }
    return dp[k];
}