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
    f(i,n)cin>>a[i];
    set<vector<int>> st;
    map<vector<int>,int> mp;
    int ans=0;
    for(int i=0;i<n;i++){
        vector<int> bits(31,0);
        int x=a[i];
        int ind=0;
        while(x){
            if(x&1)bits[ind]=1;
            ind++;
            x=x>>1;
        }
        if(st.find(bits)!=st.end()){
            mp[bits]--;
            if(mp[bits]==0)
            st.erase(bits);
        }
        else {
            ans++;
            for(int i=0;i<31;i++)bits[i]=(bits[i]+1)%2;
        st.insert(bits);
        mp[bits]++;
        }
        
        
    }
    cout<<ans<<endl;
}
return 0;
}
