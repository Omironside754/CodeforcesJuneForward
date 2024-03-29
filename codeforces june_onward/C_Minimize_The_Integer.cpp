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
    int n = s.length();
    string odd="" , even="" , ans ="";
    for(int i = 0 ; i<n ; i++)
    {
        if((s[i]-'0')%2 == 0)
        {
            even += s[i];
        }
        else{
            odd += s[i];
        }
    }
    
    int o =0;
    int e =0;
    for(int k = 0 ;k<s.size() ; k++)
    {
        if(e<even.size() && o<odd.size())
        {
            if(even[e]<odd[o])
            {
               ans += even[e++];
            }
            else{
                ans +=odd[o++];
            }
        }
        else if (e == even.size())
        {
            while(o<odd.size())
            {
                ans += odd[o++];
            }
            break;
        }
        else{
            while(e<even.size())
            {
                ans += even[e++];
            }
            break;
        }
        
    }
    cout<<ans<<endl;

}
 return 0;
 }