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

    int n;  
    cin>>n;  
    vi a(n);
    forn(i, 0 , n )cin>>a[i];
    sort(all(a));
    if(n%2 ==0)
    {
        int ans1 = 0  , ans2 =0 ; 
        forn(i,0,n)
        {
            ans1 += (abs(a[i] - a[n/2 -1]));
        }
        forn(i,0,n)
        {
            ans2 += (abs(a[i] - a[n/2]));
        }
        cout<<min(ans1 , ans2)<<endl;
    }
    else
    {
        int ans = 0 ;
        forn(i , 0 , n )
        {
            ans += (abs(a[i] - a[n/2]));
        }
        cout<<ans<<endl;
    }

 return 0;
 }