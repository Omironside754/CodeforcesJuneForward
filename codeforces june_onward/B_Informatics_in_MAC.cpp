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
int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;  
    cin>>n;  
    vi a(n);
    map<int, int>mp;
    forn(i , 0 , n)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int temp = -1;

   
    forn(i, 0, n + 2) {
        if (mp[i] == 0) {
            temp = i;
            break;
        }
    }
    // cout<<temp<<endl;
    set<int>st; 
    int an1 = 0 ,  an2 = 0; ; 
    
    forn(i , 0 , n)
    {
      if(a[i]<temp)st.insert(a[i]);
      if(st.size() == temp)
      {
         an2 = i; 
         st.clear(); 
         break;
      }


      
    }
    bool flag  =  false ;
    forn( i , an2 +1 , n)
    {
        if(a[i]<temp)st.insert(a[i]);
        if(st.size() == temp)
        {
         flag =  true;
        }
    }
    if(flag){
        cout<<2<<endl;
        cout<<an1+1 <<" "<<an2+1<<endl;
        cout<<an2+1+1 <<" "<<n<<endl;
    }
    else cout<<-1<<endl;
   
}
 return 0;
 }