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
    int c = 0 ; 
    forn(i , 0 , n)
    {
        if(s[i] == '1')c++;
    }
   if(c%2 == 1)
   {
    cout<<"NO"<<endl;
   }
   else 
   {
    if(c == 2)
    {
        bool flag =  false;
        for(int i = 0 ; i<n-1 ; i++)
        {
            if(s[i] == '1' && s[i+1] == '1')
            {
                flag =  true;
                break;
            }
            
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    else cout<<"YES"<<endl;
   }
}
 return 0;
 }