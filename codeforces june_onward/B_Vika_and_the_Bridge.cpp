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
    int n,k;  
    cin>>n>>k;  
    vi a(n);
    forn( i , 0 ,n)cin>>a[i];
    vi last(k+1 , -1); // to store the last position at which the kth colour was observed
    vector<multiset<int>> dis(k+1); // to maintain the maximum and second maximum gap in between for a specific colours
    forn(i , 0 ,n)
    {
        int jump = i - last[a[i]] - 1; // current jump to reach here from last position of exact same color
        last[a[i]] =  i;  // last ko update kro 

        dis[a[i]].insert(jump); 
        while(dis[a[i]].size() > 2)
        {
            dis[a[i]].erase(dis[a[i]].begin()); // this is remove the smaller value of gaps because it's a multiset 
        }
    }
    int ans = n ; 
    forn( i , 0 , k+1 )
    {
        if(last[i]!=-1)
        {
            int jump = n - last[i] -1 ; 
            dis[i].insert(jump);
        
        while(dis[i].size()>2)
        {
            dis[i].erase(dis[i].begin());
        }
        vi values; 
        for(auto j : dis[i])
        {
            values.pb(j);
        }
        ans = min (ans , max(values[0] , values[1]/2));
        }
    }
    cout<<ans<<endl;
}
 return 0;
 }