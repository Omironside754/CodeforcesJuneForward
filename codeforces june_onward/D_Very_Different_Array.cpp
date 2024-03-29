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
    int n,m;  
    cin>>n>>m;  
    vi a(n),b(m);
    forn(i,0,n)cin>>a[i];
    forn(i,0,m)cin>>b[i];
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    int ans = 0 ; 
    int l = 0 ;
    int r = m-1;
    vi c(n);
    int cnt  = 0 ;
    int fill = 1;
    int left = 0 ; 
    int right = n-1;
    while(cnt <n)
    {
      if(fill)
      {
        if(abs(b[l] - a[left ])>abs(b[r] - a[left]))
        {
            c[left] = b[l];
            l++;
            left++;
            cnt++;
           
        }
        else if(abs(b[l] - a[left])==abs(b[r] - a[left]))
        {
            c[left] = b[l];
            left++;
            l++;
            cnt++;
        }
        else{
            c[left] = b[r];
            r--;
            left++;
            cnt++;
        
        }
        fill = 0;
      }

      else{
        if(abs(b[l] - a[right])>abs(b[r] - a[right]))
        {
            c[right] = b[r];
            r--;
            right--;
            cnt++;
        }
         else if(abs(b[l] - a[right])==abs(b[r] - a[right]))
        {
            c[left] = b[l];
            left++;
            l++;
            cnt++;
        }
        else{
            c[right] = b[r];
            r--;
            right--;
            cnt++;

        }
        fill = 1;
      }
    }
    int sum = 0 ;
    forn(i,0,n)
    {
        sum += abs(c[i]-a[i]);
    }
    cout<<sum<<endl;
}
 return 0;
 }