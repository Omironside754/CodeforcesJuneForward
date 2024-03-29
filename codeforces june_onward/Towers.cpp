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
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;  
    cin >> n;  
    vi a(n);
    multiset<int> st; 
    forn(i, 0, n) {
        cin >> a[i];
        auto it = st.upper_bound(a[i]); 
        if (it != st.end()) {
            st.erase(it);
            st.insert(a[i]);
        } else {
            st.insert(a[i]);
        }
    }
    cout << st.size() << endl;

    return 0;
}
