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
   
   int n , m ; 
   cin>>n>>m;
   char ch[m];
    int a[m];
   forn(i,0,m)
   {
    cin>>ch[i]>>a[i];
   }
   vector<int>fac(n+1 , 0); // for the factor 
   vector<int>vis(n+1 , 0); // checking the visited nm
   forn(i,0,m)
   {
    char c = ch[i];
    int nm = a[i];
    if(c == '+')
    {
        if(vis[nm])
        {
            cout<<"Already on"<<endl;
        }
        else 
        {
            int idx ; // to store the conflicting number if we get 
            bool check = true; // flag for conflicting 
           for (int i = 2; i <= sqrt(nm); i++)
            {
                if(nm%i == 0)
                {
                    if(fac[i] || fac[nm/i])
                    {
                        if(fac[i]) idx = fac[i];
                        else idx = fac[nm/i];
                        check = false;
                        break;
                    }

                }
            }
            //edge for the nm itself 
            if(check && fac[nm])
            {
                idx = fac[nm];
                check = false;
            }
            if(check)// avi tk agr sb chill rha 
            {
                vis[nm] = 1;
                cout<<"Success"<<endl;
                if(nm>1)fac[nm] = nm;
                
          // ab nay nm ke factor ko fill krna 
                     for (int i = 2; i <= sqrt(nm); i++)
                    {
                        if(nm%i == 0)
                        {
                            fac[i] = nm;
                            fac[nm/i]=nm;
                        }
                    }


                
            }
            else
            {
                cout<<"Conflict with "<<idx<<endl;
            }

        }
    }
    else if (c == '-')
    {
        if(vis[nm] == 0)
        {
            cout<<"Already off"<<endl;
        }
        else{
            vis[nm]= 0;
            cout<<"Success"<<endl;
            fac[nm]=0;
           for (int i = 2; i <= sqrt(nm); i++)
            {
                if(nm%i == 0)
                {
                    fac[i] = 0;
                    fac[nm/i]=0;
                }
            }
        }
    }
   }
   
    
    




 return 0;
 }