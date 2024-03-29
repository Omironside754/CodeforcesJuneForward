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
    string a , b,  c;
    cin>>a>>b>>c;
    
    int cnt =0 ;
    forn(i,0,n)
    {
        if(c[i] == a[i] || c[i] == b[i])cnt++;
    }
    if(cnt == n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
 return 0;
 }