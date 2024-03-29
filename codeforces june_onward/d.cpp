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
    vi a(n),b(n);
    forn(i,0,n)cin>>a[i];
    forn(i,0,n)cin>>b[i];
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    reverse(b.begin() , b.end());
    bool check =  true;
    int sum = a[0] +b[0];
    forn(i,1,n)
    {
       int temp =  a[i] + b[i];
      if(temp !=  sum)
      {
         check =  false;
         break;
      }
      else{
        continue;
      }
    }
    if(check)
    {forn(i,0,n)cout<<a[i]<<" ";
      cout<<endl; 
     forn(i,0,n)cout<<b[i]<<" ";
       cout<<endl; 
    }
    
    else 
    {
        cout<<-1<<endl;
    }
}
 return 0;
 }