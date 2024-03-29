#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;  
        cin>>n>>x>>y; 
        int cm  =( x*y)/(__gcd(x,y));
        int pn = n/x ; 
        int nn = n/y ; 
        int nhilena  = n/cm;
        pn = pn - nhilena ;
        nn = nn - nhilena ;
        int pos = 0 ; 
        int neg = 0 ; 
        int pos_index = n;
        int neg_index = 1;
        int i =1;
        while(i<=pn)
        {
            pos += pos_index;
            pos_index--;
            i++;
        }
        i = 1;
        while(i<=nn)
        {
            neg += neg_index;
            neg_index++;
            i++;
        }

        cout<<(pos - neg)<<endl;
    }
    return 0;
}
