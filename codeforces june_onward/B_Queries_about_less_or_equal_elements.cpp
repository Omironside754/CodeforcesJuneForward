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
    vi a(n), b(m);
    forn(i,0,n)cin>>a[i];
    forn(i,0,m)cin>>b[i];
    sort(a.begin(),a.end());
    forn(i,0,m)
    {
       auto it = upper_bound(all(a) , b[i]);
       if(it != a.end())
       {
        cout<<distance(a.begin(),it)<<" ";
       }
       else cout<<n<<" ";
    }
    
  

 return 0;
 }