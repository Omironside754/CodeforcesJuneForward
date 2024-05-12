#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
   int a,b,c,d;
   
   cin>>a>>b>>c>>d;
   if(a > b) swap(a, b);
   if(c > d) swap(c, d);

   if((c > a && c < b) != (d > a && d < b)) 
   {
        cout<<"YES"<<endl;   }
   else if((c > a || c < b) != (d > a || d < b)) {
        cout<<"YES"<<endl;   }
   else
   {
        cout<<"NO"<<endl; 
   }
}
 return 0;
}
