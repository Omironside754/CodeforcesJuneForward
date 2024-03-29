#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int (i)=0;(i)<(n);(i)++)
int main(){
    #define int long long
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int b[n+2];
    f(i,n+2){
        cin>>b[i];
    }
    sort(b,b+n+2);
    int sum=0;
    f(i,n){
        sum+=b[i];
    }
    if(sum==b[n]){
        f(i,n)cout<<b[i]<<" ";
        cout<<endl;
    }
    else{
        sum+=b[n];
        int ind=-1;
        for(int i=0;i<=n;i++){
            if(sum-b[i]==b[n+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1)cout<<-1<<endl;
        else{
            for(int i=0;i<=n ;i++){
                if(i!=ind)
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}
return 0;
}