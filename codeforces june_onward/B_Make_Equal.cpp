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
    int sum = 0 ; 
    bool flag = true; 
   forn(i, 0 , n )
   {
    cin>>a[i];
    sum += a[i]; 

   }
   int b = sum /n ; 
   int sx = 0 ; 
   forn(i , 0 , n )
   {
    if(a[i] >= b)
    {
       sx += a[i] - b ; 
    }
    else
    {
        if(b - a[i] <= sx )
        {
            sx -= b - a[i];
            continue;
        }
        else
        {
            flag = false ; 
            break ;
        }
    }
   }
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}
 return 0;
 }