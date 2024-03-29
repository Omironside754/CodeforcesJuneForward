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
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, s;  
        cin >> n >> s;
        vi a(n), b(n);
        forn(i, 0, n) cin >> a[i];
        forn(i, 0, n) cin >> b[i];
        
        vector<int> bc(n + 1, 0);

        forn(i, 0, n) {
            bc[abs(b[i])] += a[i];
        }

        int bullet = s;
        bool flag = true;

        for (int i = 1; i <= n; i++) {
            if (bc[i] > bullet) {
                cout << "NO" << endl;
                flag = false;
                break;
            }
            bullet -= bc[i];
            bullet += s;
        }

        if (flag) cout << "YES" << endl;
    }

    return 0;
}
