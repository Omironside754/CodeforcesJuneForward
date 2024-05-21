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
    vi a(n); 
    forn(i,0,n)cin>>a[i]; 
    vi dp;
    dp.pb(a[0]);

   //  cout<<dp[0]<<" ";
    for(int i = 1 ; i<n ;i++)
    {
        if(a[i]>dp.back())
        {
            dp.pb(a[i]);
        }
        else
        {
            int id = lower_bound(all(dp) , a[i]) -dp.begin();
            dp[id] = a[i] ; 
        }
      //  cout<<dp[i]<<" ";
    }
   // cout<<endl;
    cout<< dp.size() <<endl;;
 return 0;
 }