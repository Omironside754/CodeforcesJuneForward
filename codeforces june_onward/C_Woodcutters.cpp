class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int n = grid.size();
        
        vector<vector<int>> v(n, vector<int>(n, -1));
        int i = 0;
        int y1 = 0, y0 = 0, y2 = 0;

        while (i < n / 2) {
            if (grid[i][i] == 1) y0++;
            if (grid[i][i] == 2) y2++;
            if (grid[i][i] == 0) y1++;
            if (grid[i][n - i - 1] == 1) y0++;
            if (grid[i][n - i - 1] == 2) y2++;
            if (grid[i][n - i - 1] == 0) y1++;
            v[i][i] = 1;
            v[i][n - i - 1] = 1;
            i++;
        }
        if (grid[n / 2][n / 2] == 1) y0++;
        if (grid[n / 2][n / 2] == 2) y2++;
        if (grid[n / 2][n / 2] == 0) y1++;
        v[n / 2][n / 2] = 1;

        i = n / 2 + 1;
        while (i < n) {
            if (grid[i][n / 2] == 1) y0++;
            if (grid[i][n / 2] == 2) y2++;
            if (grid[i][n / 2] == 0) y1++;
            v[i][n / 2] = 1;
            i++;
        }
        int yn0 = 0, yn1 = 0, yn2 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j] == -1) {
                    if (grid[i][j] == 1) yn1++;
                    if (grid[i][j] == 2) yn2++;
                    if (grid[i][j] == 0) yn0++;
                }
            }
        }
        unordered_map<int,int>mp,mp1;
        mp[0]=y1,mp[1]=y0,mp[2]=y2;
        mp1[0]=yn0,mp1[1]=yn1,mp1[2]=yn2;
        int sum=y1+y0+y2;
        int minia=1e9;
        for(auto it :mp){
            int temp= sum-it.second;
            int minii= 1e9;
            for(auto iter : mp1){
                if(iter.first==it.first){
                    temp+=iter.second;
                }
                else{
                    minii=min(iter.second,minii);
                }
            }
            minia=min(temp+minii,minia);
        }

        return minia;
    }
}; 



 for(int i = 0; i < n; i++) { // sare arr[i];
            for(int len = 1; len <= arr[i].size(); len++) {
                for(int start = 0; start + len <= arr[i].size(); start++) {
                    string sub = arr[i].substr(start, len);
                    bool found = false;
                    for(int j = 0; j < n; j++) {
                        if(i != j && arr[j].find(sub) != string::npos) {
                            found = true;
                            break;
                        }
                    }
                    if(!found && (sub.size() < ans[i].size() || (sub.size() == ans[i].size() && sub < ans[i]))) {
                        ans[i] = sub;
                    }
                }
            }
            if(ans[i] == string(21, 'z')) {
                ans[i] = ""; 
            }
        }
        return ans;