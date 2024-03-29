#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<int> r(m);
        vector<char> c(m);
        for(int i = 0; i < m; i++) {
            cin >> r[i] >> c[i];
        }
        vector<int> pos(n+1, 0);
        pos[x] = 1;
        for(int i = 0; i < m; i++) {
            vector<int> newpos(n+1, 0);
            for(int j = 1; j <= n; j++) {
                if(pos[j]) {
                    if(c[i] != '1') {
                        newpos[(j + r[i] - 1) % n + 1] = 1;
                    }
                    if(c[i] != '0') {
                        newpos[(j - r[i] - 1 + n) % n + 1] = 1;
                    }
                }
            }
            pos = newpos;
        }
        vector<int> result;
        for(int i = 1; i <= n; i++) {
            if(pos[i]) {
                result.push_back(i);
            }
        }
        cout << result.size() << "\n";
        for(int i : result) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
