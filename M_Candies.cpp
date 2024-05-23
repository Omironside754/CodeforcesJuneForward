#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int32_t main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n, k;  
    cin >> n >> k;  
    vector<int> a(n+1); 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // DP array: dp[i][j] - number of ways to distribute `j` candies to the first `i` children
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    vector<vector<int>> pre(n + 1, vector<int>(k + 1, 0));
    dp[0][0] = 1;  // 1 way to distribute 0 candies among 0 children
    for(int i = 0 ; i<=k ; i++)
    {
        pre[0][i] = 1 ; 
    }
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0 ; j<= k ; j++)
        {
            dp[i][j] = (pre[i-1][j] - pre[i-1][max(0ll , j - a[i] )] + dp[i-1][max(0ll , j - a[i] )]  + mod )%mod;
            dp[i][j] %= mod ; 
            if(j-1>=0)
            {
                pre[i][j] = pre[i][j-1] ; 
            } 
            pre[i][j] = (pre[i][j] + dp[i][j])%mod ; 
        }
       
    }

    cout << dp[n][k] << endl;
    return 0;
}
