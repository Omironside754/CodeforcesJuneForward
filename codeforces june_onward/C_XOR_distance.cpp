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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (b > a)
            swap(a, b);
        vector<int> aa(65, 0), bb(65, 0);
        int ans = a - b;
        int i = 0;
        while (a)
        {
            aa[i++] = a % 2;
            a /= 2;
        }
        i = 0;
        while (b)
        {
            bb[i++] = b % 2;
            b /= 2;
        }

        for (int i = 62; i >= 0; i--)
        {
            if (aa[i] == 1 && bb[i] == 0)
            {
                if ((1ll << i) <= c)
                {
                    if (ans - 2 * (1ll << i) >= 0)
                    {
                        ans -= 2 * (1ll << i);
                        c -= (1ll << i);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}