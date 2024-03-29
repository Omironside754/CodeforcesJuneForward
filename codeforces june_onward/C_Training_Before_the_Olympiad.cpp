#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map 
int main(){
#define int long long
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;  
    cin>>n;  
    vi a(n);
    vi pref(n);
    cin>>a[0];
    pref[0] = a[0];
    vi po(n);
    if(a[0]%2 !=0)
    {
        po[0] =1 ;
    }
    else po[0] = 0 ; 
    
    forn(i,1,n)
    {
        cin>>a[i];
        if(a[i]%2 != 0)
        {
            po[i] = po[i-1] + 1 ;
        }
        else po[i] =po[i-1];
        pref[i] = pref[i-1] + a[i];
        
    }
    
    vi ans(n);
    ans[0] = a[0] ; 
   forn(i , 1 ,n)
   {
     if(po[i]%3 == 0)
     {
        ans[i] = pref[i] - po[i]/3 ;
     }
     else if(po[i]%3 == 1)
     {
        ans[i] = pref[i] - po[i]/3 -1 ; 
     }
     else
     {
        ans[i] = pref[i] - po[i]/3 ; 
     }
   }
   forn(i,0,n)cout<<ans[i]<<" ";
   cout<<endl;
}
 return 0;
 }