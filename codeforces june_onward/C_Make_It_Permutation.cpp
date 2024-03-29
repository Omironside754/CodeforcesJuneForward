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
        int n,c,d;  
        cin>>n>>c>>d;  
        set<int>st;
        vi a(n);  
        bool one = false;
        forn(i,0, n)
        {
         cin>>a[i];
         if(a[i] == 1)one = true;
         st.insert(a[i]);
        }
        int must = 0 ; 
        vi b;
        int ans = 1e18;
        must += c*(n-st.size());
        if(!one)
        {
            must += d ;
            b.pb(1);
        }
        for(auto i: st)b.pb(i);
        int m = b.size();
        int remove = 0 ; 
        for(int i = m-1 ; i>=0 ; i--)
        {
            int tmp = b[i] - i -1; // extra number of element  in between to add
            tmp *= d;  // adding cont 
            tmp += c*remove; // remove all the right element 
            ans = min(ans , tmp);
            remove ++ ;

        }
        cout<< must + ans <<endl;


      
    }
    return 0;
}
