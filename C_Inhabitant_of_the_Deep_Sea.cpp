// || ॐ भूर्भुवः स्वः तत्सवितुर्वरेण्यं भर्गो देवस्यः धीमहि धियो यो नः प्रचोदयात् ||

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


#define ordered_set tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<pair<int, int>, null_type,less<pair<int, int> >, rb_tree_tag,tree_order_statistics_node_update> 

//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set




const int M = 1e9+7;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef pair<int,int> pi;
#define pb push_back
#define nl cout<<endl;
#define mp(x,y) make_pair(x,y)
#define all(c) c.begin(),c.end()
#define rep(i,a,b) for(int i=a; i<b;i++)
#define in_trice ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define take(v,n) rep(i,0,n) cin>>v[i];



const int N=200005;


//---------------CHECK PRIME---------------------------------------------------
bool isprime(ll x){
 if(x<=1) return false;


for(int i=2;i*1LL*i<=x;i++){
if(x%i==0) return false;
}
return true;

}
//-----------------------------------------------------------------------------



//---------------BINARY EXPONENENTIAL------------------------------------------>

ll binpow(ll a,ll b){
 ll res=1;
 while(b > 0){
    if(b&1) res*=a; // check the last bit of b ie set or unset
    a*=a; // computes a,a^2,a^4,a^8........
    b/=2; // shifts to the next left bit.....
 }

return res;
}

// a^11== a^8*a^2*a^1

//-----------------------------------------------------------------------------


//---------------------------------------SIEVE FOR PRIMES----------------------->

int smallest_p_factor[N];
int largest_p_factor[N];
vector<bool> v(N,true);
void checkprimes(ll x){


v[0]=false ,v[1]=false;
v[2]=true;
v[3]=true;
smallest_p_factor[2]=largest_p_factor[2]=2;
for(int k=4;k<=x;k+=2) {
    v[k]=false;
    smallest_p_factor[k]=2;
}
for(int i=3;i*1LL*i<=x;i+=2){
if(v[i]){
    smallest_p_factor[i]=largest_p_factor[i]=i;
for(int j=i*1LL*2;j<=x;j+=i){
    if(smallest_p_factor[j]==0){
        smallest_p_factor[j]=i;
    }
    largest_p_factor[j]=i;
v[j]=false;
}
}
}

}
//-------------------------------------------------------------------------------

//-----------------------------Factorials and ncr-----------------------------------------------

const int MOD=1e9+7;
ll fact(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i%MOD;
    return res%MOD;
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


//---------------------------------BINARY NUMBER ------------------------------

string bin(ll x){
    string s;

    
    while(x>0){
        if(x%2) s+='1';
        else s+='0';
        x>>=1;
    }
        if(x==0){
        while(s.size()<=31) s+='0';

     reverse(all(s));
       return s;
    }

    
}

//-----------------------------------------------------------------------------

#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
// ------------------------------------------------------------------------------------

ll gcd(ll a,ll b){
return b?gcd(b,a%b):a;
}






void chill(){


    ll n,k;
    cin>>n>>k;


vi v(n);
take(v,n);

int i=0;
int j=n-1;

int sinked=0;

ll lf=(k+1)/2;
ll rf=(k)/2;

for (i=0;i<n;i++){
// cout<<lf<<endl;
if(lf>=v[i]){
    lf-=v[i];
  v[i]=0;
  sinked++;
}
else{
    v[i]-=lf;
    if(v[i]==0) sinked++;
    lf=0;
}
if(lf==0) break;

}
// for(auto &it:v){
//     cout<<it<<" ";
// }
// nl;


for(j=n-1;j>=0;j--){
    // cout<<rf<<endl;
if(v[j]==0) continue;
    if(rf>=v[j]){
        rf-=v[j];
        v[j]=0;
        sinked++;
    }
    else {
        // cout<<v[j]<<endl;
        v[j]-=rf;
        if(v[j]==0) sinked++;
        rf=0;
    }
    if(rf==0) break;
}
// cout<<i<<" "<<j<<endl;




if(i>j) cout<<n<<endl;
else cout<<sinked<<endl;





}



int main(){
    in_trice
int times=1;
cin>>times;




while(times--){
   
    chill();

}
return 0;
}