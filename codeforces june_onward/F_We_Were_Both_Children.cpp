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
    vi cnt(n+1) , mx(n+1);
    forn(i,0,n)
    {
        int x ;cin>>x;
        if(x<=n)++cnt[x];
    }
    for(int i =1 ; i<=n; ++i)
    {
        for(int j =i ; j<=n ; j+=i)
        { //logn
            mx[j] +=cnt[i];
        }
    }
    cout<<*max_element(all(mx))<<"\n";
}
 return 0;
 }