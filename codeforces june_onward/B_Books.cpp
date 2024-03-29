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

    int n,k;  
    cin>>n>>k;  
    vi a(n);
    forn(i,0,n)cin>>a[i];
    int temp = *min_element(all(a));
    if(temp>k)cout<<0<<endl;
    else
    {
        int  l = 0 , r =0 ;
        int sum = 0;
        int mxl = 1 ;
        while(r<n)
        {
          if(sum + a[r] <= k)
          {          
            mxl = max(mxl ,r-l+1);  
          }
          sum += a[r];
          r++;
          while(sum>k)
          {
            sum -= a[l];
            l++;
          }
        }
        cout<<mxl<<endl;
    }


 return 0;
 }