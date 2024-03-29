#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    int n; 
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    // Calculate suffix of GCDs
    vi gs(n);
    gs[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--) gs[i] = __gcd(gs[i+1], a[i]);
    
    //    gcd(lcm(a,b), lcm(a,c), lcm(a,d), lcm(a,e)) = lcm(a,gcd(b,c,d,e));
    vi g(n);
    for(int i=0; i<n-1; i++) g[i] = (a[i]*gs[i+1])/__gcd(a[i], gs[i+1]);
       g[n-1] = 0;
    
    
    int ans = g[0]; 
    for(int i=1; i<n; i++) ans = __gcd(ans, g[i]);

    cout<<ans<<endl;
    return 0;
}
