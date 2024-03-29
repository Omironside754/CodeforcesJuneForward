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
    if(n%2 ==  1)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        string a = "";
        for(int i = 0 ; i <n; i++)
        {
            a+='A';
        }
        string b = "";
        forn(i , 0 , n)
        {
            if(i%2 ==0)
            {
                b += 'B';
                b += a[i];
            }
            else b += a[i];

        }
        cout<<b<<endl;
    }
}
 return 0;
 }