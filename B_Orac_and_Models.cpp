#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<int> cnt(n + 1, 1); 
        for (int i = 1; i <= n; i++) {
            for (int j = i * 2; j <= n; j += i) {
                if (a[j] > a[i]) {
                    cnt[j] = max(cnt[j], cnt[i] + 1); 
                }
            }
        }

        // Find maximum length of subsequence
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = max(ans, cnt[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
