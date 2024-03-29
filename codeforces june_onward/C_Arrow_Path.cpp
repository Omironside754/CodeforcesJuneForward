#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
vector<vector<int>> dp;

int solve(int i, int j) {
    if (i < 0 || i >= 2 || j < 0 || j >= grid[0].size()) {
        return 0;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    if (grid[i][j] == '<' || grid[i][j] == '>') {
        return dp[i][j] = 0;
    }
    if (j == grid[0].size() - 1 && i == 1) {
        return dp[i][j] = 1;
    }
    return dp[i][j] = solve(i, j + 1) || solve(i + 1, j) || solve(i - 1, j);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        grid.resize(2);
        cin >> grid[0] >> grid[1];

        dp = vector<vector<int>>(2, vector<int>(n, -1));

        if (solve(0, 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
