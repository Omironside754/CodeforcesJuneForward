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
    string a;
    cin>>a;
    int n = a.length();
    int ans = n;
    int c =0 ;
    for(int i = 0 ; i<n-1 ; i++)
    {
       if(a[i] == a[i+1])c++;
       else {
        ans -= c;
        c = 0 ; 
       }
    }
    ans-=c; 
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(a[i] == '0' && a[i+1] == '1')
        {
            ans--;
            break;
        }
    }
    cout<<ans<<endl;
  
}
 return 0;
 }