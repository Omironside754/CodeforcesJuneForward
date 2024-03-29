#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int (i)=0;(i)<(n);(i)++)



int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
         ll x;
   cin>>x;
   if(x%11==0){
    cout<<"YES\n";
   }
   else if(x%111==0)cout<<"YES\n";
   else{
    bool flag=false;
    while(x>0){
        x-=11;
        if(x%111==0){
            cout<<"YES\n";
            flag=true;
            break;
        }
    }
    if(!flag)cout<<"NO\n";
   }

    }
    return 0;
}
