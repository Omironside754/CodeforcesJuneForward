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
     int a ,  b , c; 
     cin>>a>>b>>c; 
     if(a == 0 && b == 0 && c ==0 )
     {
        cout<<0<<endl;
     }
     else
     {
        if((a+ b + c )%2 == 1)
        {
            
                cout<<-1<<endl;
           
        }
        else 
        cout<<min((a+b+c)/2 ,  (a+b) )<<endl;
     }
       
}
 return 0;
 }