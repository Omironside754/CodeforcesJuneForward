#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int (i)=0;(i)<(n);(i)++)
int main(){
ios::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
int m=1e9 +7;
//vector<vector<int>> dp(n+1,vector<int>(4,0));
vector<int> odp(4,0);
vector<int> ndp(4,0);
//dp[0][3]=1;
odp[3]=1;
int sum=1;
for(int i=1;i<=n;i++){
    int csum=0;
    for(int j=0;j<4;j++){
        ndp[j]=(sum-odp[j]+m)%m;
        csum=(csum+ndp[j])%m;
    }
    odp=ndp;
    sum=csum;
}
cout<<ndp[3]<<endl;
return 0;
}
