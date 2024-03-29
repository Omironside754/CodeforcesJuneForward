#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define f(i,n) for(int (i)=0;(i)<(n);(i)++)

int main()
{
ios::sync_with_stdio(false); cin.tie(0);

int t;
cin>>t;
while(t--)
{
int n,q;cin>>n;
        int hari=69;
        int kal=96;
        int gur=hari+kal;
        gur--;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>all;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                all.push_back(i-1);
            }
        }
        gur--;
        cin>>q;
        while(q--){
            ll x,y;
            cin>>x>>y;
            auto it = lower_bound(all.begin(),all.end(),x-1);
            if(it==all.end()){
                cout<<-1<<" "<<-1<<endl;
            }
            else if(*it+1<=y-1){
                cout<<*it+1<<" "<<*it+2<<endl;
            }
            else{
                cout<<-1<<" "<<-1<<endl;
            }
        }
        gur--;gur--;gur--;gur--;
}
}