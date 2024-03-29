#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map 
int main(){
#define int long long
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;  
    cin>>n;  
    string s; 
    cin>>s;
    string ans ; 
    for(int i = 0 ; i < n ; i++)
    {
        ans += s[i];
        if((s[i] == 'a' || s[i] == 'e') && (s[i+1] == 'b' || s[i+1] == 'c' || s[i+1] == 'd') && ((i+2)!= n))
        {
            if(s[i+2] =='b' || s[i+2] == 'c' || s[i+2] == 'd')
            {
                ans += s[i+1];
                i++;
                ans += '.';

            }
            else{
                ans += '.';
            }
        }
    }
     cout<<ans<<endl;
}
 return 0;
 }