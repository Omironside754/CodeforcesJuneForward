#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ump unordered_map 
int main(){
#define int long long
ios::sync_with_stdio(false); cin.tie(0);
int t;
cin>>t;
while(t--)
{
    char ap[3][3] ; 
    int a = 0 ;
    int b = 0 ; 
    int c =0 ;
    for(int i = 0 ; i<3 ;i++)
    {
        for(int j = 0 ; j  < 3 ; j++)
        {
            cin>>ap[i][j];
           if(ap[i][j] == 'A')a++;
           if(ap[i][j] == 'B')b++;
           if(ap[i][j] == 'C')c++;
        }
    }
    if(a == 2)cout<<"A"<<endl;
    if(b == 2)cout<<"B"<<endl;
    if(c == 2)cout<<"C"<<endl;
}
 return 0;
 }