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
    string s;
    cin>>s;
    set<char>a;
    for(int i = 0 ; i < s.length(); i++)
    {
        a.insert(s[i]);
    }
    if(a.size()<=1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
       cout<<"YES"<<endl;
       string b = s;
       sort(all(b));
       int i = 0 ;
       while(b == s)
       {
         
         swap(b[i] , b[0]);
         if(b!=s)break;
         else swap(b[i] , b[0]);
         i++;
       }
       cout<<b<<endl;

    }
}
 return 0;
 }