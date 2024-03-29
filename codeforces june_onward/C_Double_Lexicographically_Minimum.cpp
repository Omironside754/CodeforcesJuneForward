#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> cnt(26);
    for(auto e : s)cnt[e - 'a']++;
    int l = 0, r = n - 1;
    for(int i = 0; i < 26; i++){
        if(cnt[i] == 0)continue;

        if(cnt[i] % 2 == 0){ //simple symmetric 
            while(cnt[i] >= 2){
                cnt[i] -= 2;
                s[l] = s[r] = char(i + 'a');
                l++; r--;
            }
        }
        else{
            while(cnt[i] >= 2){// symmetric upq
                cnt[i] -= 2;
                s[l] = s[r] = char(i + 'a');
                l++; r--;
            }
            if(l == r){  // last only this no more to the right left 
                s[l] = char(i + 'a');
                break;
            }
            int j = i + 1;
            while(cnt[j] == 0)j++;

            if(r - l == cnt[j]){
                while(cnt[j] >= 2){
                    cnt[j] -= 2;
                    s[l] = s[r] = char(j + 'a');
                    l++; r--;
                }
                if(cnt[j] == 1)s[l] = char(j + 'a');
                s[r] = char(i + 'a');
                break;
            }

            else{
                while(j < 26){
                    while(cnt[j] > 0){
                        cnt[j]--;
                        s[l] = char(j + 'a');
                        l++;
                    }
                    j++;
                }
                s[r] = char(i + 'a');
            }
            
        }
    }
    cout << s << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}