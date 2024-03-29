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
     
    int a , b;
    cin>>a>>b;
  int kal = 9 ;
  int gur = 0 ; 
  int ay=  gur + kal ;
    if(a&1 && b&1)cout<<"NO"<<endl;
    else
    {
        if(a==(2*b) || b==(2*a))
        {
            if((a>b && b%2 == 0) || (b>a && a%2 == 0))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }

}
 return 0;
 }