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
    forn(i , 0 ,n)
    {
        cin>>a[i];

    }
    vi p(n);
    p[0] = a[0];
    forn(i , 1 ,n)
    {
        p[i] = p[i-1] + a[i];
    }
    int q; 
    cin>>q;
    vi ans(q);
   for(int i = 0 ; i  < q ; i++)
{
    int l , u ;
    cin>>l>>u;
    l--; 
    auto it = (l == 0) ? upper_bound(all(p), u) : upper_bound(all(p), p[l-1]+u);
    ans.pb((it == p.end()) ? -1 : it - p.begin()); 
}

    forn(i,0,q)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
 return 0;
 }