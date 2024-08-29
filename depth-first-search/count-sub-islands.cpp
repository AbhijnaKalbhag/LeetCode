class Solution {
public:
    
// Custom hash function for std::pair<int, int>
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2>& p) const {
        return std::hash<T1>()(p.first) ^ std::hash<T2>()(p.second);
    }
};
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int row = grid1.size();
        int col = grid1[0].size();
        unordered_set<pair<int, int>, pair_hash> visited;
        int count = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid2[i][j] && visited.find({i, j}) == visited.end()) {
                    if (dfs(visited, grid1, grid2, row, col, i, j)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }

private:
    bool dfs(unordered_set<pair<int, int>, pair_hash>& visited, vector<vector<int>>& grid1, vector<vector<int>>& grid2, int row, int col, int r, int c) {
        if (r < 0 || c < 0 || r >= row || c >= col || grid2[r][c] == 0 || visited.find({r, c}) != visited.end()) {
            return true;
        }

        visited.insert({r, c});
        bool isSubIsland = grid1[r][c] == 1;

        isSubIsland &= dfs(visited, grid1, grid2, row, col, r - 1, c);
        isSubIsland &= dfs(visited, grid1, grid2, row, col, r + 1, c);
        isSubIsland &= dfs(visited, grid1, grid2, row, col, r, c - 1);
        isSubIsland &= dfs(visited, grid1, grid2, row, col, r, c + 1);

        return isSubIsland;
    }
};
    
