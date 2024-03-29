#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAX_N = 2e5;

int N;
int ans[MAX_N];
vector<pair<pair<int, int>, int>> v(MAX_N);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    v.resize(N);

    // Input reading
    for (int i = 0; i < N; i++) {
        cin >> v[i].first.first >> v[i].first.second;
        v[i].second = i;  // store the original index
    }

    // Sorting based on the start time
    sort(v.begin(), v.end());

    int rooms = 0, last_room = 0;
    priority_queue<pair<int, int>> pq;  // min heap to store departure times.

    // Iterating through activities
    for (int i = 0; i < N; i++) {
        if (pq.empty()) {
            // If no rooms are occupied, allocate a new room
            last_room++;
            pq.push({-v[i].first.second, last_room});
            ans[v[i].second] = last_room;
        } else {
            // Check if any room is available for the current activity
            pair<int, int> minimum = pq.top();
            if (-minimum.first < v[i].first.first) {
                pq.pop();
                pq.push({-v[i].first.second, minimum.second});
                ans[v[i].second] = minimum.second;
            } else {
                // Allocate a new room if no existing room is available
                last_room++;
                pq.push({-v[i].first.second, last_room});
                ans[v[i].second] = last_room;
            }
        }

        // Update the maximum number of occupied rooms
        rooms = max(rooms, int(pq.size()));
    }

    // Output the result
    cout << rooms << "\n";
    for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
