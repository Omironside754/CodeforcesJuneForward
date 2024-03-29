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
    int n;  
    cin>>n;  
    vi a(n);
    forn(i,0,n)cin>>a[i];
    int m; 
    cin>>m;
    vi r(n);
    vi l(n);
    r[0] = 0;
    r[1] = 1;
    l[n-1] = 0;
    l[n-2] = 1;
    forn(i, 1 ,n-1)
    {
        if(abs(a[i-1] - a[i]) > abs(a[i+1] - a[i]))
        {
            r[i+1] = r[i] + 1 ; 
        }
        else r[i+1] = r[i] +  abs(a[i+1] - a[i]);
    }
    for(int i = n-2 ; i>0 ; i--)
    {
        if(abs(a[i-1] - a[i]) > abs(a[i+1] - a[i]))
        {
            l[i-1] = l[i] + abs(a[i-1] -a[i]);
        }
        else l[i-1]  = l[i] +1 ;
    }
    
    
       
      while(m--)
      {
        int x ,y ;
        cin>>x>>y;
        --x; 
        --y;
        if(y-x>0)
        {
            cout<<r[y] - r[x] <<endl;
        }
        else cout<<l[y] - l[x]<<endl; 
      }

    }

 return 0;
 }