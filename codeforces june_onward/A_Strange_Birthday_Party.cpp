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
    int n,m;  
    cin>>n>>m;  
    vi a(n) , b(m);
    forn(i,0,n)cin>>a[i];
    forn(i,0,m)cin>>b[i];
    sort(all(a));
    int ans = 0 ; 
    int ind = 0;
    for(int i = n-1 ; i>= 0 ; i--)
    {
        if(b[a[i]-1] <= b[ind])
        {
            ans += b[a[i] -1] ;

        }
        else 
        {
            ans += b[ind];
            ind++;
        }
    }
   cout<<ans<<endl;
}
 return 0;
 }