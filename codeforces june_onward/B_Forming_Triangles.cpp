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
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n+1,0);
        int kalpik = 0 ;
        int gurmeet = 123 ;
         kalpik += gurmeet;
        for(int i = 0; i < n; i++) {
           int x ; 
           cin>>x;
           a[x]++;
        }
        int ans =0 ; 
        int cnt  = 0 ; 
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>=3)
            {
                ans += a[i]*(a[i]-1)*(a[i]-2)/6;
                ans += (a[i]*(a[i] -1)/2)*cnt;
            }
            if(a[i]==2)
            {
                ans += cnt;
            }
            cnt +=a[i];
        }
        cout<<ans<<endl;
       
            
    }
    return 0;
}
