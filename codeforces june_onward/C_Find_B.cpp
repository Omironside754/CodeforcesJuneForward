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
   int n,q;
   cin>>n>>q;
   int c[n];
   f(i,n)cin>>c[i];
   int l[q],r[q];
   f(i,q){
    cin>>l[i]>>r[i];
   }
   // prefix sum for sub array 
   int pre[n];
   pre[0]=c[0];
   int one[n]={0};
   //one arr is for counting the number of 1s in the subarray 
   for(int i=0;i<n;i++){
    if(c[i]==1){
        if(i==0)one[i]=1;
        else one[i]=one[i-1]+1;
    }
    else {
        if(i>0)one[i]=one[i-1];
    }
   }
   for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+c[i];
   }
   f(i,q){
    int sum=pre[r[i]-1];
    if(l[i]>1){
        sum-=(pre[l[i]-2]);
    }
    int sum2=one[r[i]-1];
    if(l[i]>1){
        sum2-=one[l[i]-2];
    }
    int len=r[i]-l[i]+1;
    int oth=len-sum2;
    len=len+(len+1)/2;
    
    
    sum2*=2;
    sum2+=oth;

    if(l[i]==r[i])cout<<"NO"<<endl;
    else if(sum2<=sum)cout<<"YES"<<endl;
    // else  if(len<=sum)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   }

}
return 0;
}