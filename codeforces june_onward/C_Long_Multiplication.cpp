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
   string a , b ; 
   cin>>a>>b;
   int n = a.length();
   bool flag = false;
   forn(i,0,n)
   {
        if(a[i] != b[i] && flag == false)
        {
            if(a[i]<b[i])
            {
                swap(a[i] , b[i]);
                
            }
            flag = true;
        }
        else if(flag ==  true)
        {
            if(b[i]<a[i])
            {
                swap(a[i], b[i]);
            }
        }
        else continue;
   }
   cout<<a<<endl;
   cout<<b<<endl;
}
 return 0;
 }