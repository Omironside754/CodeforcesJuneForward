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
    int n,k;  
    cin>>n>>k;  
    if(n == k)
    {
        for(int i = 0 ; i < n; i ++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else if(k == 1)
    {
        for(int i = 0 ; i < n; i ++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
}
 return 0;
 }