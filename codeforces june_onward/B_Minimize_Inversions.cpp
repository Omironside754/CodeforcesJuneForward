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
    vi a(n), b(n);
    forn(i,0,n)cin>>a[i];
    forn(i,0,n)cin>>b[i];
    vpp temp(n); 
    forn(i,0,n)
    {
       temp[i]= {a[i] , b[i]}; 
    }
    sort(all(temp));
    forn(i,0,n)
    {
        a[i] = temp[i].first;
        b[i] = temp[i].second;
    }
    forn(i,0,n)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    forn(i,0,n)
    {
       cout<<b[i]<<" ";
    }
    cout<<endl;
    
}
 return 0;
 }