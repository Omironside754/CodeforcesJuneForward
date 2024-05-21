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
    vpp up, down; 
    forn(i , 0 ,n)
    {
        cin>>a[i]; 
        if(i%2 == 1)
        {
            up.push_back({a[i] , i});
        }
        else down.push_back({a[i] , i});
    }
    sort(all(up)); 
    sort(all(down));
    vi ans1(n, 0) ,ans2(n, 0);
    for(int i = 0 ; i<n/2; i++)
    {
       ans1[up[i].second] = n-i;
    }
    for(int i = 0 ; i<n/2 ; i++)
    {
        ans1[down[i].second] = n/2 - i ; 
        ans2[down[i].second] = n-i ; 
    }
    for(int i = 0 ; i<n/2; i++)
    {
       ans2[up[i].second] = n/2-i;
    }
    int x = 0  , y = 0 ; 
    forn(i , 1 , n-1 )
    {
        if((ans1[i] + a[i] > ans1[i-1] + a[i-1]) &&  (ans1[i] + a[i] > ans1[i+1] + a[i+1] ))x++ ; 
        if((ans2[i] + a[i] > ans2[i-1] + a[i-1]) &&  (ans2[i] + a[i] > ans2[i+1] + a[i+1] ))y++ ; 

    }


     if(x>=y){forn(i , 0 , n )cout<<ans1[i]<<" ";cout<<endl;}

}
 return 0;
 }
