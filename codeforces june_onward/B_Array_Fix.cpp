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
vi digit(int a) {
    vi dig;
    while (a > 0) {
        dig.push_back(a % 10);
        a /= 10;
    }
    reverse(dig.begin(), dig.end());
    return dig;
}

int32_t main(){
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;  
    cin>>n;  
     vi a(n);
     forn(i , 0 , n)cin>>a[i];
     vi b;
       b.pb(a[n-1]);
       bool flag =  true;
      for(int i = n-2 ; i>=0 ; i--)
      {
          if(a[i]<= b[0])
          {
            b.insert(b.begin() , a[i]);
          }
          else
          {
            vi dig = digit(a[i]);
            vi dig1 = dig; 
            sort(all(dig1));
            if(dig == dig1)
            {
                for(int j = dig.size()-1 ; j>=0 ; j--)
                {
                    if(dig[j] >b[0])
                    {
                        flag = false;
                        break;
                    }
                    b.insert(b.begin() , dig[j]);
                }
            }
            else
            {
                flag = false;
                 break;
            }

          }

      }
      if(flag)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}
 return 0;
 }