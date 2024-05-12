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
    vi x(n-1);
    forn(i , 0 ,n-1) cin >> x[i];

    vi a(n) ; 
    a[0] = 1001 ; 
    forn(i , 1 , n)
    {
        a[i] = a[i-1] + x[i-1] ;
    }
    forn(i , 0 ,n)cout<<a[i]<<" ";
    cout<<endl;
    

}
 return 0;
 }