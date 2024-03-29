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
    string s;
    cin>>s;
    string a = s;
    reverse(all(a));

    int k = s.length();
    bool flag = true;

    
    for(int i = 0 ; i<k/2 ; i++)
    {
        if(s[i]<s[k-i-1])
        {
         break;   
        }
        else if(s[i] > s[k-i-1])
        {
            flag = false ;
            break;
        }
        else continue;
    }
  
     if(flag)cout<<s<<endl;
     else cout<<a + s <<endl;
    
}
 return 0;
 }