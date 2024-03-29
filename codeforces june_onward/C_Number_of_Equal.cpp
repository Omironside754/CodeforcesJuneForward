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
    vi a(n);
    vi b(m
    );
    forn(i,0,n)cin>>a[i];
    forn(i,0 ,m)cin>>b[i];
    unordered_map<int , int>mp;
    forn(i,0,n)
    {
        mp[a[i]]++;
    }int ans = 0 ;
    int cnt  = 1;
    forn(i,0,m-1)
    {
        if(b[i] == b[i+1])
        {
           cnt++;
        }
        else{
            if(mp[b[i]])ans += cnt*mp[b[i]];
            
            cnt =1 ;
        }
    }
    if(mp[b[m-1]])
    {
        ans += cnt*mp[b[m-1]];
    }
    
  
    cout<<ans<<endl;
 return 0;
 }