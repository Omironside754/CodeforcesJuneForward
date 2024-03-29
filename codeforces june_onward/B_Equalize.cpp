#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map 
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
   
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> st;
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        vector<int> arr;
        for (auto x : st)
        {
            arr.push_back(x);
        }
        int k = n;
        n = arr.size();
        int ans = 1;
        
        for (int i = 0; i < n; i++)
        {
            int en = arr[i] + k - 1;
            int it = upper_bound(arr.begin(), arr.end(), en) - arr.begin() - i;
           
            ans = max(ans, it);
        }
      
       
        cout << ans << endl;
}
 return 0;
 }