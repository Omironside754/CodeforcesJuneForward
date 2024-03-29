#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int, int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vi a(n);
    forn(i, 0, n)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = 0;
    int mx = 0;
    int mn = LONG_LONG_MAX;
    int ans = 0;
    multiset<int> mt;
    while (j < n)
    {
        mt.insert(a[j]);
        mx = *(--mt.end());
        mn = *(mt.begin());
        while (i <= j && mx - mn > k)
        {
            mt.erase(mt.find(a[i]));
            mx = *(--mt.end());
            mn = *(mt.begin());
            i++;
        }
        ans += (j - i + 1);
        j++;
    }
    cout << ans << endl;

    return 0;
}