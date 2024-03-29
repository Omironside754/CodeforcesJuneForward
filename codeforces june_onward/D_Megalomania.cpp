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
    vpp v(n);
    forn(i ,0 ,n)
    {
        cin>>v[i].second>>v[i].first;
    }
    sort(all(v));
    bool flag = true;
    int cur = 0;
    forn( i , 0 , n)
    {
        if(cur + v[i].second <= v[i].first )
        {
            
            cur += v[i].second;
            continue ; 
        }
        else
        {
           flag = false; 
           break;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else
    {
        cout<<"No"<<endl;
    }

 return 0;
 }