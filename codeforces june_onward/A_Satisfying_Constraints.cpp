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
int t;
cin>>t;
while(t--)
{
    int n;  
    cin>>n; 
   
    int mx = INT_MIN;
    int mn = INT_MAX;
    vi three;
    while(n--)
    {
        int a , b ;
        cin>>a>>b;
        if(a==1)
        {
            mx = max(mx ,b);
        }
        else if (a == 2)
        {
             mn = min(mn, b);
        }
       else three.pb(b);

    } 
    int ans = mn - mx+1 ;
    if(ans<=0) cout<<0<<endl;
    else
   {
     for(auto i: three)
    {
      if(i>=mx && i<=mn)
      {
        ans--;
      }
    }
    cout<<ans<<endl;
   }
}
 return 0;
 }