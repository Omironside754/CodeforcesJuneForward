#include <bits/stdc++.h>
using namespace std;
int mod= 1e9+7;

int f(int n)
    {
        int dp[n+1];
        dp[0] = 1; 
        for(int i = 1 ; i <= n ; i ++)
        {
            dp[i] = 0;

        
        for(int j = 1 ; j<=6 ; j++)
        {
            if(i-j >=0)
            {
                dp[i] =( dp[i] + dp[i-j])%mod;
            }
        }
        }
    return dp[n];
    }
int main(){


    int n;  
    cin>>n;  
   
    cout<<f(n);

 return 0;
 }