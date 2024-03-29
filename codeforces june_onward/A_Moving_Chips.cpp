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
    vi a(n);
    forn(i,0,n)
    {
        cin>>a[i];
    }
    int ans = 0 ; 
    bool fst = false ; 
    int last = n-1 ;
    for(int i = n-1; i>=0 ; i--)
    {
        if(a[i] == 1)
        {
          last = i ;
          break;
        }
    }
    forn(i, 0 , last)
    {
      if(a[i] == 1 && fst == false)
      {
        fst = true; 
      }
      else if( a[i] == 0 && fst == true)
      {
        ans++;
      }
      else continue;
    }
    cout<<ans<<endl;
}
 return 0;
 }