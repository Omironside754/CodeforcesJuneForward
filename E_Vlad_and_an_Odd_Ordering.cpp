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
    int t;
    cin >> t;
    while(t--) {
        int n, k;  
        cin >> n >> k;  
        for(int i = 1; i <= log2(n) + 1; i++) {
            int gap = 1LL << i;
            int gapCount = (n + gap / 2LL) / gap;
            if(k <= gapCount) {
                cout << (gap / 2LL) + (k - 1) * gap << endl;
                break;
            }
            k -= gapCount;
        }
    }
    return 0;
}
