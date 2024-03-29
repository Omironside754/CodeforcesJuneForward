#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (ll i = x; i < n; ++i)
#define vi vector<ll>
#define vpp vector<pair<ll, ll>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vi a(n);
          forn(i, 0, n) {     
            cin >> a[i];
          }
        vi modified(n);  // Separate array for modified elements
        map<ll, ll> mp;
        ll sum = 0;
        mp[0] = 1;
        bool check = false;

        forn(i, 0, n) {     
           
            modified[i] = (i % 2 != 0) ? -a[i] : a[i];
            sum += modified[i];
            if(mp.find(sum) != mp.end() && mp[sum] > 0) {
                check = true;
                break;
            }
            ++mp[sum];
        }

        if(check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
