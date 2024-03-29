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
    string a ; 
    cin>>a;
    vi c0(n+1, 0);
    vi c1(n+1, 0);
    //ye pref 0 aur 1 stre krne k liye 
    forn(i, 0 , n)
    {
        c0[i+1] = c0[i] + (a[i] == '0');
        c1[i+1] = c1[i] + (a[i] == '1');
    }
    int one = c1[n]; // totale 1 kitna h 
     vi st ; // isme suitable wale i sote honge 

    forn(i, 0 , n+1)
    {
      if( i/2 <= c0[i]  && ( one - c1[i]>= ((n-i)/2)) )   
      {
        st.pb(i);
      }

    }
    // forn(i , 0, st.size())
    // {
    //     cout<<st[i];

    // }
    // cout<<endl;
     int ans = st[0];
    forn(i , 1, st.size())
    {
        int cu = abs(n/2 - st[i]);
        int ct = abs(n/2 - ans);
        if(cu < ct || (cu == ct && st[i] < ans))
        {
            ans = st[i];
        }
    }
    cout << ans << endl;
}
 return 0;
}
