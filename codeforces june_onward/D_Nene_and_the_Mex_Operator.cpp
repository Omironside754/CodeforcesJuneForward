long long findKthSmallest(vector<int>& coins, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        set<long long> seen;

        for (int coin : coins) {
            pq.push(coin);
            seen.insert(coin);
        }

        long long smallest = 0;
        while (k--) {
            smallest = pq.top();
            pq.pop();
            for (int coin : coins) {
                long long next = smallest + coin;
                if (!seen.count(next)) {
                    seen.insert(next);
                    pq.push(next);
                }
            }
        }

        return smallest;
    }