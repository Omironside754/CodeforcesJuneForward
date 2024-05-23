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

    int n,k;  
    cin>>n>>k;  
    int mod = 1e9+7 ; 
    vector<vector<int>>div(n+1);
    for(int i = 1 ; i < n+1 ; i++)
    {
        forn(j , 1 , n+1)
        {
            if(i% j ==0)
            {
                div[i].push_back(j);
            }
        }
    }
    //   for(auto i : div)
    //   {
    //     for( auto iter : i)
    //     {
    //         cout<<iter<<" ";
    //     }
    //     cout<<endl;
    //    }
    vector<vector<int>>dp(n+1 ,  vector<int>(k+1 ,0));
    //base case 
    // phle place k liye sbka sequnece ki value to 1 hi hogi 
                for(int i = 1 ; i<=n ; i++)
                {
                    dp[i][1] = 1 ; 
                }
                for(int j =1 ; j<=k ;j++)
                {
                    dp[1][j] =1 ;
                }

    ////.................
    for(int i = 2 ; i<=n ; i++)
    {
        for(int j = 2 ; j<=k  ; j++)
        {
             int sum = 0 ; 
             for(int c = 0  ; c < div[i].size() ; c++)
             {
                    sum  = (sum + dp[div[i][c]][j-1])%mod;
             }
            dp[i][j] =  sum%mod; 
        }
    }



    int ans = 0 ; 
    for(int i = 1 ; i<=n ; i++)
    {
        ans = (ans + dp[i][k] )%mod ; 
    }
    cout<<ans<<endl;

 return 0;
 }