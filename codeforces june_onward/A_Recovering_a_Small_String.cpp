#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string ans = "aaa";

        if (n <= 28) {
           ans[0] = 'a' ;
           ans[1] = 'a' ; 
           n -= 2 ; 
           ans[2] =static_cast<char>('a' + n - 1); 
        }
        else if(n>28 && n<=53)
        {
            ans[0] = 'a';
            ans[2] = 'z' ; 
            n = n - 1 - 26 ;
            ans [1] =  static_cast<char>('a' + n - 1); 

        }
        else
        {
            ans[2] = 'z' ; 
            ans[1] = 'z';
            n = n- 52 ; 
             ans [0] =  static_cast<char>('a' + n - 1); 
        }
        cout << ans << endl;
    }

    return 0;
}
