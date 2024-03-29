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

    int n,k,m;  
    cin>>n>>k>>m;  
    vi a(n);
    forn(i,0,n)cin>>a[i]; 
    vi r(n);
    map<int,vector<int>>mp;
    forn(i,0,n)
    {
        r[i] = a[i]%m;
        mp[r[i]].push_back(i);
    }
    bool  ok = true;
    for(auto it :mp)
    {
        if(it.second.size()>=k)
        {   ok = false;
            cout<<"Yes"<<endl;
            
            for(int j = 0 ;j<k; j++)
            {
                cout<<a[it.second[j]]<<" ";
                
            }
            break;
        }
    }
    if(ok)cout<<"No"<<endl;
    else cout<<endl;
   
    

 return 0;
 }