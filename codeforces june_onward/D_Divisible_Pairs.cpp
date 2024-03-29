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
    int n,x,y;  
    cin>>n>>x>>y; 
    vi a(n);
    forn(i ,0 ,n )
    {
        cin>>a[i];
    }
    vi xr(n);
    vi yr(n);
    forn(i , 0 , n )
    {
        xr[i] = a[i]%x ;
        yr[i] = a[i]%y;
    }
    map<pair<int, int> ,int>st;
    int ans = 0 ;
    forn(i, 0,n)
    {
        if(xr[i] == 0)
        {
            if(st.find({xr[i] , yr[i]}) != st.end())
            {
                ans += st[{xr[i] , yr[i]}];
                
            }
             st[{xr[i] , yr[i]}]++;
             continue;
        }

        if(st.find({x-xr[i] , yr[i]})!= st.end())
        {
            ans += st[{x-xr[i] , yr[i]}];
             st[{xr[i] , yr[i]}]++;
        }
        else
        {
              st[{xr[i] , yr[i]}]++;
        }
    }
    cout<<ans<<endl;
}
 return 0;
 }