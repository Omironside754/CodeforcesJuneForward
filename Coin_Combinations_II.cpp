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
  int mod = 1e9+7; 
 int f(int ind, int sum, vi &a, vector<vector<int>>& dp) {
    int n = a.size();
    if (sum == 0) return 1;
    if (ind == n-1) 
    {  
        return sum % a[n-1] == 0 ; 
    }
    if (dp[ind][sum] != -1) return dp[ind][sum]; 

    int take = 0;
    if (a[ind] <= sum) { 
        take = f(ind, sum - a[ind], a, dp) % mod;
    }
    int ntake = f(ind + 1, sum, a, dp) % mod; 

    return dp[ind][sum] = (ntake + take) % mod; 
}
  
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);

    int n,x;  
    cin>>n>>x;  
    vi a(n);
    forn(i , 0 , n )
    {
        cin>>a[i]; 
    }
    vector<vector<int>>dp(n+1 , vector<int>(x+1 , -1));
    cout<<f(0, x , a , dp)<<endl;
    

 return 0;
 }
