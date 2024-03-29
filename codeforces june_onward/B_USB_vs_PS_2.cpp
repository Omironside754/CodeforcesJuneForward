#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (ll i = x; i < n; i++)
#define vi vector<ll>
#define vpp vector<pair<ll, ll>>
#define vs vector<string>

#define ump unordered_map
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    ll a, b, c;
    cin >> a >> b >> c;
    ll m;
    cin >> m;
    vi usb;
    vi ps;
    forn(i, 0, m)
    {
        ll x;
        string s;
        cin >> x >> s;
        if (s == "USB")
            usb.pb(x);

        if (s == "PS/2")
        {
            ps.pb(x);
        }
    }
    sort(all(usb));
    sort(all(ps));
    vi ex;
    forn(i, a, usb.size())
    {
        ex.pb(usb[i]);
    }
    forn(i, b, ps.size())
    {
        ex.pb(ps[i]);
    }
    sort(all(ex));
    ll cnt = 0;
    unsigned long long ans = 0; // change to unsigned long long
    if (a > usb.size())
    {
        cnt += usb.size();
        ans += accumulate(all(usb), 0ULL); // change to 0ULL
    }
    else
    {
        cnt += a;
        ans += accumulate(usb.begin(), usb.begin() + a, 0ULL); // change to 0ULL
    }
    if (b > ps.size())
    {
        cnt += ps.size();
        ans += accumulate(all(ps), 0ULL); // change to 0ULL
    }
    else
    {
        cnt += b;
        ans += accumulate(ps.begin(), ps.begin() + b, 0ULL); // change to 0ULL
    }
    ll i = 0;
    while (c > 0 && i < ex.size())
    {
        ans += ex[i];
        cnt++;
        i++;
        c--;
    }
    cout << cnt << " " << ans << endl;
    return 0;
}
