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
    forn(i , 0 , n)cin>>a[i];
    int time = 0 ; 
    int mx = a[0];
    forn( i , 1, n)
    {
        if(a[i] < mx)
        {
            int ta =  mx - a[i];
            int nt = log2(ta) + 1;
            
            time = max(time , nt);
            mx = max(mx, (a[i]+(1<<nt-1)));
        }
        else 
        {
            mx = max(mx , a[i]);
        }
    }
    
    cout<<time<<endl;
}
 return 0;
 }
