#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
     int q; cin >> q;
    bool otherA = false, otherB = false;
    ll cntA = 0, cntB = 0;
    while(q--) {
        ll d, k; string x; cin >> d >> k >> x;
        for(auto c: x) {
            if(d == 1) {
                if(c != 'a') otherA = 1;
                else cntA += k;
            } else {
                if(c != 'a') otherB = 1;
                else cntB += k;
            } 
        }
        if(otherB) {
            cout << "YES\n";
        } else if(!otherA && cntA < cntB) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}   

 return 0;
 }