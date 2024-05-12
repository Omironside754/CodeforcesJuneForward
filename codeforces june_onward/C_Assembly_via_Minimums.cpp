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
    cin>>n;  
    vi a(n);
    int bn = (n*(n-1))/2;
    vi  b(bn);
    map<int,int>mp; 
    forn( i , 0 , bn ) 
    {
        cin>>b[i];
        mp[b[i]]++;
    }
    forn( i , 0 , n-1)
    {
        if (!mp.empty() && mp.begin()->second >= n - 1 - i)
        {
            a[i] = mp.begin()->first; 
            mp.begin()->second -= n - 1 - i;
            if(mp.begin()->second == 0)
            {
                mp.erase(mp.begin());
            }
        }

    }
    a[n-1] = a[n-2];
   forn(i , 0 ,n)
   {
    cout<<a[i]<<" ";
   }
    
    cout<<endl;

}
 return 0;
 }