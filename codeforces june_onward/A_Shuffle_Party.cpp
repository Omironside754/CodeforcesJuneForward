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
unsigned int nearestPowerOfTwo(unsigned int n) {
    if (n <= 1) {
        return 1;
    }

    // Find the highest set bit
    int bit = 0;
    while (n >>= 1) {
        bit++;
    }

    // Set all bits to the right of the highest set bit
    return 1 << bit;
}
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;  
    cin>>n;  
    cout<<nearestPowerOfTwo(n)<<endl;

    
}
 return 0;
 }




