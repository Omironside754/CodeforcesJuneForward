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
        int sum = 0 ; 
        bool flag = true;
       
         for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        sum += a[i];
        if(sum <= 0) flag = false;
        }
    sum = 0;

    for(int i = n - 1 ; i >= 0 ; i--){
        sum += a[i];
        if(sum <= 0) flag = false;
    }

        if(flag)cout<<"YES"<<endl;
        else 
        {
                
                 cout<<"NO"<<endl;
        }

}
 return 0;
 }