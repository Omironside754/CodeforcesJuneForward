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
    sort(all(a));
    if(n %2 == 0)
    {
       int c = 1; 
       int i = n/2-1;
       while(i<n-1 && a[i+1] == a[i])
       {
        c++;
        i++;
       }
       cout<<c<<endl;
    }
    else {
        int c = 1; 
        int i = n/2;
        while(i < n-1 && a[i+1] == a[i]) {
            c++;
            i++;
        }
        cout << c << endl;
    }
}
 return 0;
 }
