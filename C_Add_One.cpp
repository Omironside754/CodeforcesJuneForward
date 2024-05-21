#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map 
int mx = 2e5 + 5 ; 
int mod = 1e9+7;
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n,m;  
    cin>>n>>m; 
    vector<vector<int>>dp(mx, vector<int>(10 , 0));
    for(int i = 0 ; i<=mx; i++)
    {
        for(int j = 0 ; j<=8 ; j++)
        {
            dp[i][j] = dp[i-1][j+1] ; 
        }
        dp[i][9] = (dp[i-1][0] + dp[i-1][1])%mod;
    }
}
 return 0;
 }