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
    int n, m;  
    cin>>n>>m; 
    vector<pair<int, int>> people(n);
    for(int i = 0; i < n; i++) {
        cin>>people[i].second;
    }
    for(int i = 0; i < n; i++) {
        cin>>people[i].first;
    }
    sort(all(people), greater<pair<int, int>>());
    priority_queue<int> pq;
    int total_bribes = 0;
    for(int i = 0; i < n; i++) {
        total_bribes += people[i].second;
        pq.push(people[i].second - people[i].first);
        while(pq.size() > m) {
            total_bribes -= pq.top();
            pq.pop();
        }
    }
    cout << total_bribes << "\n";
}
 return 0;
}
