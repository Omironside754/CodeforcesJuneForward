#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>

bool check(int mid, vi &a, int k, int sum)
{
    int n = a.size();
    if (sum - mid <= k)
        return true;
    for (int i = n - 1; i >= max(1ll, (int)n - mid); i--)
    {
        sum -= a[i];
        int midl = mid - (n - i);
        int tsum = sum - a[0] + (n - i + 1) * (a[0] - midl);
        if (tsum <= k)
            return true;
    }
    return false;
} 

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi a(n);

        forn(i, 0, n)
        {
            cin >> a[i];
        }
        int sum = accumulate(a.begin(), a.end(), 0ll);
        sort(a.begin(), a.end());
        int l = 0;
        int r = 1e10;
        int ans = 1e10;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, a, k, sum))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}