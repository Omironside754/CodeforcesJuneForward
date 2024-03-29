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

    int n;  
    cin>>n;  
    vi a(n);
    int maxi = -1e5;
    int sum = 0 ;
    forn(i, 0 , n )
    {
        cin>>a[i];
        maxi = max(maxi ,  a[i]);
        sum += a[i];
    }
    cout<<max(maxi*2 , sum)<<endl;

    

 return 0;
 }