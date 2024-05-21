#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int (i)=0;(i)<(n);(i)++)
int main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    vector<vector<int>> bits(n,vector<int> (20,0));
    f(i,n){
        cin>>a[i];
        int x=a[i];
        int ind=0;
        while(x){
            if(x&1)bits[i][ind]=1;
            x=x>>1;
            ind++;
        }
    }
    int ans=1;
    for(int i=0;i<20;i++){
        vector<int> pos;
        for(int j=0;j<n;j++){
            if(bits[j][i])pos.push_back(j+1);
        }
        
        if(pos.size())
        ans=max(ans,pos[0]);
        for(int j=1;j<pos.size();j++){
            ans=max(ans,pos[j]-pos[j-1]);
        }
        if(pos.size())
        ans=max(ans,n-pos[pos.size()-1]+1);
    }
    cout<<ans<<endl;

}
return 0;
}