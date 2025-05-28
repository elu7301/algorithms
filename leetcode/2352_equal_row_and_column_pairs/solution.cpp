class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>, int> row_map;
        int result = 0;

        for (const auto& row : grid) {
            row_map[row]++;
        }

        for (int col = 0; col < n; col++) {

            vector<int> column;

            for (int row = 0; row < n; row++) {
                column.push_back(grid[row][col]);
            }
            result += row_map[column];
        }

        return result;
    }
};
