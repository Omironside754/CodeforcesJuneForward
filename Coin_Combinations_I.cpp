
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

    int n ,  x ; 
    cin>>n>>x ; 
    int mod = 1e9+7 ; 
    vi a(n); 
    forn(i , 0 , n)cin>>a[i];
    vi dp(x+1 , 0); 
    dp[0] = 1 ; 
    for(int i= 1 ; i<=x ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            if(a[j] <= i )
            {
                dp[i] = (dp[i] + dp[i - a[j]])%mod;  
            }
        }
    }
    cout<<dp[x] <<endl;
 return 0;
 }