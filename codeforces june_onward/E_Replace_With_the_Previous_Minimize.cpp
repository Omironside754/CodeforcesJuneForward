#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int (i)=0;(i)<(n);(i)++)
int main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s,ans;
    bool flag=true;
    int maxi=1;
    cin>>s;
    char ch;
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        int cur=s[i]-'a' +1;
        if(!flag){
            if(cur>=0 && cur<=maxi){
                ans.push_back('a');

            }
            else if(cur>=l && cur<=r){
                ans.push_back(ch);

            }
            else ans.push_back(s[i]);
            continue;
        }
        if(cur<=maxi){
            ans.push_back('a');
            continue;
        }
        if(cur-maxi<=k){
            k-=(cur-maxi);
            if(k==0)flag=false;
            maxi=cur;
            ans.push_back('a');
        
        }
        else {
            ch=cur-k +'a'-1;
            ans.push_back(ch);
            l=cur-k;r=cur;
            flag=false;
            k=0;
        }
    }
    cout<<ans<<endl;
}
return 0;
}
