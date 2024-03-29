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
    int n,k,d;  
    cin>>n>>k>>d;  
    vi a(n);
    forn(i,0,n)cin>>a[i];
    int l = 0 ; 
    int r = 0 ;
     map<int , int>mp;
     set<int>st;
     
    for(int i = 0 ; i<d ; i++)
    {
        mp[a[i]]++;
        st.insert(a[i]);
        r++;
    }
    int ans = st.size();
   
    while (r<n)
    { 
        mp[a[r]]++;
        mp[a[l]]--;
        if(mp[a[l]]==0)st.erase(a[l]);
        l++;
        st.insert(a[r]);
        r++;
       
       int siz= st.size();
       ans = min(ans, siz);
    }
    cout<<ans<<endl;
}
 return 0;
}
