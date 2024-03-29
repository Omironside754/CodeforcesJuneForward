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
    int n,m,k;  
    cin>>n>>m>>k;  
    vi a(n) , b(m);
    forn(i ,0 ,n)
    {
        cin>>a[i];
    }
    forn(i , 0 ,m)cin>>b[i];
     sort(all(b));
     int ans = 0 ;
     forn(i , 0 , n)
    {
    if(a[i]>k)continue;
    int cm= k-a[i];
    auto it = upper_bound(b.begin(), b.end(), cm);
     
    
        ans += distance(b.begin(), it); 
    
    }

     cout<<ans<<endl;

}
 return 0;
 }