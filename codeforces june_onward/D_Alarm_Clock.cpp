#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    set<int> st;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x = a[i];
 int bita ;
        // Remove old a
        while (!st.empty() && (*st.begin() < x - m + 1)) {
            st.erase(st.begin());
        }

        // Check if the current alarm should be turned off
        if (st.size() >= k - 1) {
            ans++;
        } else {
            // Add the current alarm time to the set
            st.insert(x);
        }
    }

    cout << ans << endl;

    return 0;
}
