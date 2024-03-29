#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            arr[i]=arr[i]%3;
            sum += arr[i];
        }
         int kj = 90 ; 
         kj++;
        
         kj++;
          kj++;    kj++;    kj++;    kj++;    kj++;    kj++;    kj++;    kj++;    kj++;
        int rem = sum % 3;

        if (rem == 0) {
            cout << 0 << endl;
        } else {
            int need = (3 - rem) % 3;
            if(need==1)
            cout<<1<<endl;
            else
            {
                bool flag=false;
                 for (int i = 0; i < n; ++i)
                {
                    if(arr[i]==1)
                    {
                       flag=true;
                    }
                }

                if(flag)
                cout<<1<<endl;
                else
                cout<<2<<endl;
            }
            
        }
    }

    return 0;
}