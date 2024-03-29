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
int a,b;
cin>>a>>b;
vi f;
if((a==b && a!=0) || (a==0 && b==0) )cout<<"infinity"<<endl;
else if(a ==0)cout<<0<<endl;
else if(a<b)cout<<0<<endl;
    else
    {
        int n = (a-b);
        int ans = 0 ;
        for(int i = 1 ; i<= sqrt(n); i++)
        {
            if(n%i == 0 )
            {
                if(n/i == i )
                {
                    f.pb(i);
                }
                else 
                {
                    f.pb(i);
                    f.pb(n/i);
                }
            }
        }

      
        for(int i = 0 ;i<f.size() ; i++)
        {
         
         if(f[i]>b)ans++;
        }
        cout<<ans<<endl;
    }
 return 0;
 }