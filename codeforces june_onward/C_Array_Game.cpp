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
    int n,k;
    cin>>n>>k;
  
    vector<int> a(n);
    int mn=1e18;
    f(i,n){
        int an;
        cin>>an;
        a[i]=an;
        mn=min(mn,a[i]);
    }
    sort(a.begin(),a.end());
    if(k>2){
        cout<<0<<endl;
    }
    else {
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(i!=j){
                    mn=min(mn,abs(a[i]-a[j]));
                }
            }
        }
        if(k==1){
            cout<<mn<<endl;
            continue;
        }
        for(int i=0;i<n;i++) for(int j=0;j<i;j++){
            int v=a[i]-a[j];
            int p=lower_bound(a.begin(),a.end(),v)-a.begin();
            if(p<n) mn=min(mn,a[p]-v);
            if(p>0) mn=min(mn,v-a[p-1]);
        }
        cout<<mn<<endl;
        
    }
   

}
return 0;
}
