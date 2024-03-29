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



int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, m;  
        cin >> n >> m;  
        vi a(n-1);
        vi b(n);
        forn(i, 0, n-1) cin>>a[i];
        forn(i, 0, n) cin >> b[i];
        a.pb(1);
        sort(all(a));
        sort(all(b));
       
        int piche = n;
        int l = 0, r =0 ;
        while(l<piche && r<n)
        {
            if(a[l]<b[r])
            {
                l++;
                r++;
            }
            else
            {
                piche--;
                r++;
            }
        }
        cout << n-piche << endl;
    }
    return 0;
}
