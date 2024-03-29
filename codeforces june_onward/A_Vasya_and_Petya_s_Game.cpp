#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int (i)=0;(i)<(n);(i)++)
void sieve(vector<int> &sie,int n){
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*i;j<=n;j+=i){
            sie[j]=0;
        }
    }
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
int n;
cin>>n;
vector<int> sie(n+1,1);
sieve(sie,n);
int cnt=0;
vector<int> ans;
for(int i=2;i<=n;i++){
    if(sie[i]){
        int c=i;
        while(true){
            ans.push_back(c);
            c=c*i;
            cnt++;
            if(c>n)break;
            
        }
    }
}
cout<<cnt<<endl;
for(auto i:ans){
    cout<<i<<" ";

}
cout<<endl;
return 0;
}