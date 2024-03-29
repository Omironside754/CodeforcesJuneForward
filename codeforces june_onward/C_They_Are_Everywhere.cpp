#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i, n) for (int(i) = 0; (i) < (n); (i)++)
bool check(string s, set<char> &st, unordered_map<char, int> &mp, int n, int mid, int kal)
{
    int l = 0;
    for (int i = mid; i < n; i++)
    {
        mp[s[l]]--;
        if (mp[s[l]] == 0)
            st.erase(s[l]);
        mp[s[i]]++;
        st.insert(s[i]);
        if (st.size() == kal)
            return true;
        l++;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    set<char> stt;
    for (auto c : s)
        stt.insert(c);
    int kal = stt.size();
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        set<char> st;
        unordered_map<char, int> mp;
        for (int i = 0; i < mid; i++)
        {
            st.insert(s[i]);
            mp[s[i]]++;
        }
        if (st.size() == kal)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (check(s, st, mp, n, mid, kal))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
