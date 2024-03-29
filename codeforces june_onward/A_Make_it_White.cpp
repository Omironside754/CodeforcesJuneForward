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
    string s ; 
    cin>>s;
    int sl = s.length();
    int l = 0 ;
    int r = sl-1;
    for(int i =0 ; i<sl; i++)
     {
        if(s[i] == 'B')
        {
            l = i;
            break;
        }
     }
    for (int i = sl - 1; i >= 0; i--) {
    if (s[i] == 'B') {
        r = i;
        break;  // Add this break statement
    }
}

     cout<<r-l+1<<endl;
}
 return 0;
 }