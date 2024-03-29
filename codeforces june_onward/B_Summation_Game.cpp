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
    int n, k,x;  
    cin>>n>>k>>x;  
    int ans=INT_MIN;
    vi a(n);
    int sum =0;
    forn(i,0,n)
    {
        cin>>a[i];
        sum += a[i];
    }



    sort(all(a));
    int bob = 0;
    for(int i = n-1; i>=n-x ; i--)
    {
        bob +=a[i];
    }
    forn(i,0, k+1)
    {
      if(i>0){
        sum-=(a[n-i]);
        bob-=a[n-i];
        if(n-x-i>=0){
            bob+=a[n-x-i];
        }
       
      }
       ans=max(ans,sum-(2*bob));
    }

  cout<<ans<<endl;

    
}
 return 0;
 }