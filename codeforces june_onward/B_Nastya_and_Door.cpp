#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i, n) for (int(i) = 0; (i) < (n); (i)++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        f(i, n) cin >> a[i];
        vector<int> mt; //store peaks 
        for (int i = 1; i < n - 1; i++)
        { 
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                mt.push_back(i);
            }
        }
        
        int l = 0, r = 0, ans = 0, ind = 0;
        while (r < mt.size())
        {
            if (mt[r] - mt[l] + 2 < k)
            {
                if (r - l + 1 > ans)
                {
                    ans = r - l + 1;
                    int kal = k - (mt[r] - mt[l] + 2);
                    ind = max(0, mt[l] - kal);
                }
                r++;
            }
            else
            {
                l++;
                if (l >= r)
                    r++;
            }
        }
        cout << ans + 1 << " " << ind + 1 << endl;
    }
    return 0;
}
