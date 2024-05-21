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
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);

    int n; 
    cin>>n; 
    int mod = 1e9+7;
    vector<string>v(n); 
    vector<vector<int>>a(n , vector<int>(n)); 
    forn(i , 0 ,n)
    {
        cin>>v[i];
        for(int j = 0 ;  j <n ; j++)
        {
            if(v[i][j] == '.')
            {
                a[i][j] = 1 ; 
            }
            else a[i][j] = 0 ; 
        }
    }
    vector<vector<int>>dp(n+1 , vector<int>(n+1,0)); 
     dp[0][0] = a[0][0] ; //base case 
     for(int i = 1 ; i < n ; i++)// first row things 
     {
        if(a[0][i] == 1)
        {
            dp[0][i] = dp[0][i-1];
        }
     }
     for(int i = 1 ; i < n ; i++)// first col things 
     {
        if(a[i][0] == 1)
        {
            dp[i][0] = dp[i-1][0];
        }
     }
     for(int i = 1 ; i < n ; i++ ) 
     {
        for(int j = 1; j<n; j++)
        {
            if(a[i][j] == 1)
            {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod; 
            }
        }
     }
     cout<<dp[n-1][n-1]<<endl; 

 return 0;
 }
