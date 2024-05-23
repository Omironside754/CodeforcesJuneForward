#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 998244353

int32_t main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n;  
    cin >> n;  
    vector<int> a(n); 
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    // Create DP table
    vector<vector<int>> dp(n + 1, vector<int>(3001, 0));
    
    // Initialize the first row of DP table
    for(int j = a[0]; j <= b[0]; j++) {
        dp[0][j] = 1;
    }
    
    // Fill the DP table
    for(int i = 1; i < n; i++) {
        vector<int> prefixSum(3001, 0);
        // Calculate prefix sums for easier range sum calculation
        for(int j = 0; j <= 3000; j++) {
            prefixSum[j] = dp[i - 1][j];
            if(j > 0) prefixSum[j] = (prefixSum[j] + prefixSum[j - 1]) % MOD;
        }

        for(int j = a[i]; j <= b[i]; j++) {
            dp[i][j] = prefixSum[j]; // sum of all dp[i-1][k] where k <= j
        }
    }
    
    // Sum up all valid sequences
    int result = 0;
    for(int j = a[n-1]; j <= b[n-1]; j++) {
        result = (result + dp[n-1][j]) % MOD;
    }
    
    cout << result << endl;
    return 0;
}
