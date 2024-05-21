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
    vector<long double>a(n) ; 
    forn(i , 0 ,n)
    {
        cin>>a[i];
    } 
    vector<vector<long double>>dp(n , vector<long double>((n+1) , 0)) ; 
    //base case 
    dp[0][1] = a[0] ; //head
    dp[0][0] = 1- a[0] ; //tail 
    for(int i = 1 ; i< n ; i++)
    {
        for(int j = 0 ; j<=i+1 ; j++)
        {
            if(j == 0)
            {
                dp[i][0] = dp[i-1][0]*(1 - a[i]);
            }
            else 
            {
                dp[i][j] = dp[i-1][j]*(1 -a[i])//tail
                           + dp[i-1][j-1]*a[i] ; //head
            }
        }
    }
    long double ans = 0 ; 
   for(int i = n/2+1; i<=n; i++)
   {
      ans+=dp[n-1][i];
   }
   cout<<fixed<<setprecision(10)<<ans<<'\n';



 return 0;
 }