class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<int> dist(n * n + 1, -1);
        queue<int> q;

        dist[1] = 0;
        q.push(1);

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (int move = 1; move <= 6; move++) {

                int next = curr + move;

                if (next > n * n) continue;

                int row = n - 1 - (next - 1) / n;
                int col = (next - 1) % n;

                if ((n - 1 - row) % 2 == 1) {
                    col = n - 1 - col;
                }

                if (board[row][col] != -1) {
                    next = board[row][col];
                }

                if (dist[next] == -1) {
                    dist[next] = dist[curr] + 1;
                    q.push(next);
                }
            }
        }

        return dist[n * n];
    }
};
