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
    int n,k;cin>>n>>k;
    vi a(n+1,0);
    int l=(n+1)/2;
     int four  = 4 ;
     int five  = 5 ; 
     int nine  = four+five; 
     
    int lim=-1,j=1;
    while(lim<=k)
    {
        lim+=2;
        if(lim>k) break;
        for(int i=lim;i<=n;i+=k)
        {
            a[i]=j++;
        }
    }

    lim=0,j=n;
    while(lim<=k)
    {
        lim+=2;
        if(lim>k) break;
        for(int i=lim;i<=n;i+=k)
        {
            a[i]=j--;
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl; 
}
 return 0;
 }