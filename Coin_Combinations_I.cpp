#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
int mod = 1e9+7;

int f(int sum, vi &a, vector<int>& dp) {
    if (sum == 0) return 1;
    if (dp[sum] != -1) return dp[sum]; 

    int ans = 0;
    for (int i = 0; i < a.size(); i++) { 
        if (a[i] <= sum) { 
            ans = (ans + f(sum - a[i], a, dp)) % mod;
        }
    }

    return dp[sum] = ans; 
}

int32_t main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n, x; 
    cin >> n >> x; 
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> dp(x + 1, -1); 
    int ans = f(x, a, dp);
    cout << ans << endl;

    return 0;
}
