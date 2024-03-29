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
    int n , k ,m;  
    cin>>n>>k>>m;  
    string s;
    cin>>s;
    bool gur=true;
    vector<vector<int>>alpha(k ,vector<int>(k , 0));
   string ans="";
   for(int i = 0 ; i < k  ;  i++)
   {
     bool found  = false ; 
     for(int j = 0 ; j<m; j++)
     {
        if(s[j] == char(97+i))
        {
                if(found == false){found = true;
                
                     for(int x = j+1 ; x<m ; x++)
                     {
                        alpha[i][s[x]-'a']++;
                     }

                }
                for(int kal=0;kal<k;kal++){
                    if(alpha[i][kal]<n-1){
                        gur=false;
                        ans.push_back(char(97+i));
                        for(int i=0;i<n-1;i++){
                            ans+=
                        }
                    }
                }
        }

     }
   }
if(gur)cout<<"YES\n";
else{
    cout<<"NO\n";
    string an="";
    an+=s.substr(m-n+1,n-1);
    an+=s[0];
    cout<<an<<endl;
}

}
 return 0;
 }