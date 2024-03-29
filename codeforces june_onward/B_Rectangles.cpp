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

    int n,m;  
    cin>>n>>m;  
   int mat[n][m];
   int ans = 0 ;
     forn(i,0,n)
     {
           int c1 =0;
            forn(j,0,m)
                {
                   cin>>mat[i][j];
                   if(mat[i][j] == 1)c1++;

                }    
            ans += (1ll<<c1) + (1ll<<(m-c1)) -2;
       }
       forn(i,0,m)
       {
        
        int c2 = 0 ;
        forn(j,0,n)
        {
          if(mat[j][i] ==1)
          {
            c2++;
          }
         
        } ans += (1ll<<c2) + (1ll<<(n-c2)) - 2;
       }

    ans -=(m*n);
    cout<<ans<<endl;
 return 0;
 }