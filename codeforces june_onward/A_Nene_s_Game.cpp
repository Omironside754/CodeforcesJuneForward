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
    int k ,q;  
    cin>>k>>q;  
    vi a(k);
    forn(i ,0 ,k)cin>>a[i];
    vi  b(q);
    forn(i , 0 , q)
    {
        cin>>b[i];
        if(b[i] <a[0])
        {
            cout<<b[i]<< " ";
        }
        else cout<<a[0]-1<<" ";
    }
    cout<<endl;
    

}
 return 0;
 }