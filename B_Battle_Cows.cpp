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
    int n,k;  
    cin>>n>>k; 
    vi a(n);
    int ind =-1 ; 
    int ans = 0 , ans2  = 0;
    forn(i , 0 ,n)
    {
        cin>>a[i];
    }
    int b = a[k-1]; 
    bool  flag = false;

    for(int i = 0 ; i<k-1; i++)
    {
        if(a[i]>b)
        {
            flag = true;
            ind = i ;
            break;
        }
    }
    int g = 0, jk= 0 ;
    g++; g++;
    if(flag)
    {
        swap(a[ind] , a[k-1]);
        if(ind>0)ans++;
        for(int i = ind+1 ; i<n; i++)
        {
            if(a[i]<a[ind])ans++;
            else break;
        }
            g--; 
            g--;
            jk--;
            swap(a[ind] , a[k-1]);
       
    }

    swap(a[k-1] , a[0]);
    for(int  i =1 ; i<n; i++)
    {
        if(a[i] < a[0])
        {
            ans2++;
              g++ ; 
              g--;
        }
        else break;
    }
       g--;
       g++ ; 
       
   cout<<max(ans , ans2)<<endl;
    
    
}
 return 0;
 }