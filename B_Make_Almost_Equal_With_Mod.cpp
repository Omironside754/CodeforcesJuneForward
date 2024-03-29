#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;  
        cin>>n;  
        vi a(n);
        for(int i = 0; i < n; i++) 
        {
            cin>>a[i];
        }
        for(int i = 1; i <= 57; i++)
        {
            int k = pow(2, i);
            unordered_set<int> distinct_values;
            for(int j = 0; j < n; j++)
            {
                distinct_values.insert(a[j] % k);
            }
            if(distinct_values.size() == 2)
            {
                cout << k << "\n";
                break;
            }
        }
    }
    return 0;
}
