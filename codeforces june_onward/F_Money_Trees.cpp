#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<long long>
#define vpp vector<pair<int, int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map
int main()
{
#define int long long
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int temp = INT_MAX;
        vll a(n);
        vll h(n);
        forn(i, 0, n)
        {
            cin >> a[i];
            temp = min(temp, a[i]);
        }
        forn(i, 0, n) cin >> h[i];
        // this stores the indexes for which the condition holds
        vi pre(n, 0);
        for (int i = 0; i < n - 1; i++)
        {
            if (h[i] % h[i + 1] == 0)
            {
                pre[i] = 1;
            }
        }
        int ans = 1;
        int cnt = 0;
        if (temp > k)
        {
            cout << 0 << endl;
        }
        else{
        int r = 0, l = 0;
        while (r < n - 1)
        {
            if (pre[r] == 0)
            {
                cnt = 0;
                r++;
                l = r;
                continue;
            }
            cnt += a[r];
            while (l <= r && cnt > k)
            {
                cnt -= a[l];
                l++;
            }
            if (cnt + a[r + 1] <= k)
            {
                ans = max(ans, r - l + 2);
            }
            else
            {
                ans = max(ans, r - l + 1);
            }
            r++;
        }

        cout << ans << endl;}
    }
    return 0;
}
