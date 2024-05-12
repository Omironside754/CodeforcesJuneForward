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
   forn(i, 0,n) cin>>a[i];
    bool y = true;
         int j = n;
        int k = 0;
        for (int i = 0; i <n; i++)
        {
            if(a[i]!=a[0]){
                y = false;
                j = min(j,k);
                k = 0;
            }
            else k++;
        }
        if (y)
        {
            cout<<-1<<endl;
            continue;
        }
         j = min(j,k);
         cout<<j<<endl;
}
 return 0;
 }