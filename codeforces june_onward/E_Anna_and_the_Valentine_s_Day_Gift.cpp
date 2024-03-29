#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
int kalpik=69;
kalpik--;
        int a[n];
        int hari[n];
        int cnt=0;
        //int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            int c=0;
            int mus=a[i];
            while(mus){
                if(mus%10==0){
                    c++;
                    mus/=10;

                }
                else break;
            }
            hari[i]=c;
            mus=a[i];
            c=0;
            while(mus){
                cnt++;
                mus/=10;
            }

        }
        kalpik--;kalpik--;kalpik--;kalpik--;kalpik--;kalpik--;
        sort(hari,hari+n);
        for(int i=n-1;i>=0;i-=2){
            cnt-=(hari[i]);
        }
        cnt--;
        kalpik--;kalpik--;kalpik--;kalpik--;kalpik--;kalpik--;kalpik--;kalpik--;
        if(cnt>=m)cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;
    }

    return 0;
}
