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
int mod = 1e9 +7 ;
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
        int n,k;  
        cin>>n>>k; 
        vi a(n) , b(n);
        forn(i , 0 ,n)cin>>a[i]; 
        forn(i , 0 ,n)cin>>b[i];
     
        int m = *max_element(all(a)); 
     
        vector<int> eq(m + 1, INT_MAX); 
        eq[1] = 0;
        
        for (int i = 1; i <=m;  i++)
        {
            for (int x = 1; x<=i ; x++) 
            {
                int id = i + (i / x);
                if (id <=m)
                {
                    eq[id] = min(eq[id], eq[i] + 1);
                }
            }
        }
        
        // forn(i , 1 , m+1 )
        // {
        //     cout<<eq[i]<<" ";
        // }   
        // cout<<endl;

        for(int i = 0 ; i< n ; i++)
        {
            a[i] = eq[a[i]] ; 
        }




    // now it is ready be a knapsack problem template 
//    vector<vector<int>> dp(n, vector<int>(k + 1, 0));

//     for(int i = a[0] ; i<=k ; i++)
//     {
//         dp[0][i] = b[0] ;
//     }

//     for (int i = 1; i < n; i++) {
//         for (int j = 0; j <= k; j++) {
//             int nt = dp[i-1][j];
//             int take = INT_MIN;
//             if (j >= a[i]) {
//                 take = b[i] + dp[i-1][j - a[i]];
//             }
//             dp[i][j] = max(nt, take)%mod;
//         }
//     }
//    cout<<dp[n-1][k]<<endl;

    vi prev(k+1 , 0);
    if(a[0]<=k)
    {
        prev[a[0]] = b[0] ; 
    }
    forn( i , 1 , n)
    {
        for(int j = k ; j>= a[i] ; j--)
        {
            prev[j] = max(prev[j] , prev[j - a[i]] + b[i]);
        }
    }
      int ans = 0;
        for (int j = 0; j <= k; j++) {
            ans = max(ans, prev[j]);
        }

        cout << ans << endl;

}
 return 0;
 }