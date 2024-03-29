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

    int n;  
    cin >> n;  
    vi a(n);
   forn(i , 0 , n)cin>>a[i];
    set<int> st; 
   
    vector<pair<int, int>> ans; 
    int l = 0;
    int mex = -1; 
   forn(i, 0, n) {
   
    if (st.find(a[i]) != st.end() ) {
        
        ans.pb({l + 1, i + 1});
        l = i + 1;
        st.clear();
        continue;
    }
     if(i == n-1 && ans.size()>0)
     {
        ans.back().second = n;
     }
    st.insert(a[i]);
}

    
    if (ans.size() >= 1) {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    else cout << mex << endl;

    return 0;
}
