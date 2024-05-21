#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vll vector<long long>
#define ump unordered_map 
const int mod = 1e9 + 7;

ll getans(vll& arr, ll N, ll M, vector<vector<ll>>& dp) {
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            if (arr[i] == 0)
            {
                for(int val = 1; val <= M; val++)dp[i][val] = 1;    
            }
            else 
            {
                dp[i][arr[i]] = 1;
            }
        } 
        else 
        {
            if(arr[i] == 0) 
            {
                for (int val = 1; val <= M; val++) 
                {
                  dp[i][val]=((val > 1 ? dp[i - 1][val - 1] : 0) + dp[i - 1][val] + (val < M ? dp[i - 1][val + 1] : 0)) % mod;                     
                }
            } 
            else
            {
                int val = arr[i];
                dp[i][val] = ((val > 1 ? dp[i - 1][val - 1] : 0) + dp[i - 1][val]+ (val < M ? dp[i - 1][val + 1] : 0)) % mod;                 
            }
        }
    }

    ll ans = 0;
    for (int val = 1; val <= M; val++) {
        ans = (ans + dp[N - 1][val]) % mod;
    }

    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vll arr(N);

    forn(i, 0, N) cin >> arr[i];

    vector<vector<ll>> dp(N, vector<ll>(M + 2, 0));
    cout << getans(arr, N, M, dp) << endl;

    return 0;
}
