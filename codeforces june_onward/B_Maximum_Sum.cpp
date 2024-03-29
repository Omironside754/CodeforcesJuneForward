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

const int MOD = 1e9+7;

int m(vector<int>& a) {
    int mxi = 0;
    int curr = 0; 
    
    for (int i = 0; i < a.size(); i++) {
        mxi = max(0LL, mxi + a[i]);
        curr = max(curr, mxi);
    }
    
    return curr;
}

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;  
        cin>>n>>k; 
        vi a(n);
        forn(i , 0 , n)cin>>a[i]; 
        int sum = 0;
        forn(i , 0 , n)
        {
            sum += a[i];
        }
        int ssum = m(a);
        sum -= ssum; 
        while(k--)
        {
            ssum = (ssum*2)%MOD;
        }
        ssum = (ssum + sum)%MOD;
        if(ssum<0)ssum+=MOD;
        cout<<ssum<<endl;
    }
    return 0;
}
