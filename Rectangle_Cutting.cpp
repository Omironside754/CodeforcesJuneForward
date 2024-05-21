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
    
    int a , b; 
    cin>>a>>b;
    vector<vector<int>>dp(a+1 , vector<int>(b+1 , 0));
    for(int i = 1 ; i <a+1; i++)
    {
        for(int j = 1 ; j<b+1 ; j++)
        {
            if(i>j)
            {
                dp[i][j] = 1 + dp[i-j][j] ;
                
            }
            else if(j>i)
            {
                dp[i][j] = 1 + dp[i][j-i];
            }
            else dp[i][j] = 0 ; 
            
        }
       
    }

    cout<<dp[a][b]<<endl;
 return 0;
 }