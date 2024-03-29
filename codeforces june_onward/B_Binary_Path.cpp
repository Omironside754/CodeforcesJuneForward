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
    string s1 ,  s2;
    cin>>s1 >>s2;
    string s; 
    int l  = 0 ; 
    int f = 0 ;
    while(l<n)
    {
      if(f==0)
      {
         s +=s1[l]; 
         if(l+1 <n && s2[l]<s1[l+1])
         {
            f =1 ; 
         }
         else if(l+1 == n)
         {
            s += s2[l];
            break;
         }
         else
         {
            l++;
         }
      }
      else{
         s += s2[l];
         l++;
      }
    }
    cout<<s<<endl;
    int ans = 1 ; 
      forn(i , 1, n)
      {
         if(s1[i] == s2[i-1])ans++;
         else if (s1[i] == '0' && s2[i-1] == '1')
         {
            ans= 1 ;
         }
            else break;
      }
      cout<<ans<<endl;
    }
   



 return 0;
 }
