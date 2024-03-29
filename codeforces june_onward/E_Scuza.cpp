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
    int n,q;  
    cin>>n>>q;  
    vi a(n), k(q);
    forn(i,0,n)
    {
        cin>>a[i];
    }
    forn(i,0,q)
    {
        cin>>k[i];
    }
     vi mx(n), p(n);
     p[0]= a[0];
     mx[0] = a[0];
     forn(i, 1 , n)
     {
        mx[i] = max(a[i] , mx[i-1]);
        p[i] =p[i-1] + a[i];
     }
     forn(i,0,q)
     {
        int idx = upper_bound(all(mx) , k[i]) - mx.begin() - 1;
        if(idx<0)cout<<0<<" ";
        else cout<<p[idx]<<" ";
        
     }
     cout<<endl;
    
    
}
 return 0;
 }
