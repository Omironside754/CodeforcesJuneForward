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
struct Hashing{
    int p = 30 , m = 1e9+7;
    string s ; 
    int n ; 
    vi prefHash(n);
    vi powerOfP(n);
    vi InversePowerP(n);
    hashing(string qstring) // constructor
    {
        s = qstring ;
        n = s.size();
        calPowerAndInversePowerOfP();

    }
    void calPowerAndInversePowerOfP(){
        int curPower = 1 ; 
        for(int i = 0 ; i < n ; i++)
        {
            powerOfP[i] = currPower; 
            currPower = (currentPower *p)%m;
        }
    }
}
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
    
 return 0;
 }