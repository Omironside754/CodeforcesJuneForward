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

    int n,k;  
    cin>>n>>k;  
    vll a(n);
    int l =0; 
    int r = 0;
    int dif = 0 ;
    int ans = 0 ;
    forn(i,0,n)
    {
        cin>>a[i];   
    }
    while (l<n)
    {
        /* code */
        dif = a[r] - a[l];
        if(dif>k)
        {
           
            while(dif>k)
            {
               ans += n-r;
               l++;
               dif=a[r] - a[l];
               
            }

        }

        r++;
        if(r==n)break;

    }
    cout<<ans<<endl;
    

    


 return 0;
 }