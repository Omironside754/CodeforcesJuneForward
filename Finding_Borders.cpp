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
// Define ll as long long
#define ll long long

struct Hashing {
    string s;
    ll p = 30;
    ll m = 1e9 + 7;
    int n;
    vi hashPrefix;
    vi powerOfP;
    vi inversePowerOfP;

    Hashing(string queryString) {
        s = queryString;
        n = s.size();
        hashPrefix.resize(n);
        powerOfP.resize(n);
        inversePowerOfP.resize(n);
        calPowerAndInverseOfp();
        calHashPrefix();
    }

    void calPowerAndInverseOfp() {
        ll currentPower = 1;
        for (int i = 0; i < n; i++) {
            powerOfP[i] = currentPower;
            currentPower = (currentPower * p) % m;
        }
        inversePowerOfP[n - 1] = mminvprime(powerOfP[n - 1], m);
        for (int i = n - 2; i >= 0; i--) {
            inversePowerOfP[i] = (inversePowerOfP[i + 1] * p) % m;
        }
    }

    void calHashPrefix() {
        ll hashSoFar = 0;
        for (int i = 0; i < n; i++) {
            hashSoFar = (hashSoFar + (s[i] - 'a' + 1) * powerOfP[i]) % m;
            hashPrefix[i] = hashSoFar;
        }
    }

    ll substringHash(int l, int r) {
        ll val1 = hashPrefix[r];
        ll val2 = l > 0 ? hashPrefix[l - 1] : 0LL;
        return ((val1 - val2 + m) * inversePowerOfP[l]) % m;
    }
    ll mminvprime(ll a, ll m) {
    ll m0 = m, t, q;
    ll x0 = 0, x1 = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
        x1 += m0;
    return x1;
}

};
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
     
     string a; 
     cin>>a;
     int n = a.size() ; 
     

 return 0;
 }