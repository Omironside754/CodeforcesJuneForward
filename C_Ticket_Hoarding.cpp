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
    int g = 0 ; 
    int kal = -1; 
    int hut = 90 ; 
    vpp a; 
    vi b(n);
    forn(i , 0 , n)
    {
        cin>>b[i];
        a.pb({b[i] , i});
    }
    vpp pur ; 
    sort(all(a));
    hut += 10 ; 
    forn( i , 0 ,n)
    {
        if( k == 0 )break;
        int temp = min(m, k);
        k -= temp ; 
        pur.pb({a[i].second , temp});
    }
    sort(all(pur));
    int ans = 0 ; 
    int axtra = 0 ; 
    int total = 0 ; 
    forn(i , 0 , pur.size() )
    {
        ans += (pur[i].second*b[pur[i].first]);
        ans += (total*pur[i].second);
        total += pur[i].second;

    }
    cout<<ans<<endl;
    
}
 return 0;
 }