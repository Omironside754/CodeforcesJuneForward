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
    int n,m,k;  
    cin>>n>>m>>k;  
    if(n == m)cout<<k<<endl;
    if(n == k)cout<<m<<endl;
    if(m == k)cout<<n<<endl;
}
 return 0;
 }