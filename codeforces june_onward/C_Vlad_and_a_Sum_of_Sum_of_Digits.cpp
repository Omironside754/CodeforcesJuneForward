#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map 
int s(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);

int t;
cin>>t;
vi a(200001,0) ; 
for(int i=1;i<200001;i++){
    a[i]=a[i-1]+s(i);
}

while(t--)
{
    int n;  
    cin>>n;  
   
    cout<<a[n]<<endl;
}
 return 0;
 }