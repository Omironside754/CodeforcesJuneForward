#include <bits/stdc++.h>
 using namespace std;

 #define ll long long
 #define pb push_back
 #define vi vector<int>
 #define vb vector<bool>
 #define vl vector<long long>
 #define vp vector<pair<int,int>> 
 #define all(v) v.begin(),v.end()
 #define vvi vector<vector<int>>


int mod = 1e9+7;
int f(int ind,int n,vector<int> &vec){
   if(ind == 0) return n;
int v1,v2;
   if(vec[ind] <= n){
      int k = n/vec[ind];
      int modu = n%vec[ind];
      v1 = k+f(ind-1,modu,vec);
      v2 = k-1+f(ind-1,modu + vec[ind],vec);
      
   }
   else{
      return f(ind-1,n,vec);
   }
return min(v1,v2);
  
}

 void solve(){
    int n;
    cin>>n;
    vector<int> vec={1,3,6,10,15};
    cout<<f(4,n,vec)<<endl;
 }

 int main() {
   std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int t;
cin>>t;
while(t--){
    
   solve();
}
 }