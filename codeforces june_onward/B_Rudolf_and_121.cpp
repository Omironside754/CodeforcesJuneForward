#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int k = 0; k < t; ++k) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
         
        for (int i = 1; i < n - 1; ++i) {
            if (v[i - 1] <= v[i + 1] && v[i] >= 2 * v[i - 1]) {
                v[i + 1] -= v[i - 1];
                v[i] -= 2 * v[i - 1];
                v[i - 1] = 0;
            }
        }

        int zeroCount = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i] == 0) {
                zeroCount++;
            }
        }

        if (zeroCount != n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
