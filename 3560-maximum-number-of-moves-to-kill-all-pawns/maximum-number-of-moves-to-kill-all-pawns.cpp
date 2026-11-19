class Solution {
public:
    int maxMoves(int kx, int ky, vector<vector<int>>& positions) {
        int n = positions.size();
        vector<pair<int, int>> pts(n + 1);
        for (int i = 0; i < n; ++i) {
            pts[i] = {positions[i][0], positions[i][1]};
        }
        pts[n] = {kx, ky};

        vector<vector<int>> dist(n + 1, vector<int>(n + 1, 0));
        int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
        int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

        for (int i = 0; i <= n; ++i) {
            int d[50][50];
            memset(d, -1, sizeof(d));
            queue<pair<int, int>> q;

            int sx = pts[i].first, sy = pts[i].second;
            d[sx][sy] = 0;
            q.push({sx, sy});

            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();

                for (int dir = 0; dir < 8; ++dir) {
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];
                    if (nx >= 0 && nx < 50 && ny >= 0 && ny < 50 && d[nx][ny] == -1) {
                        d[nx][ny] = d[x][y] + 1;
                        q.push({nx, ny});
                    }
                }
            }

            for (int j = 0; j <= n; ++j) {
                dist[i][j] = d[pts[j].first][pts[j].second];
            }
        }

        int full_mask = (1 << n) - 1;
        vector<vector<int>> memo(n + 1, vector<int>(1 << n, -1));

        auto dfs = [&](auto& self, int curr, int mask) -> int {
            if (mask == full_mask) return 0;
            if (memo[curr][mask] != -1) return memo[curr][mask];

            int captured = __builtin_popcount(mask);
            bool is_alice = (captured % 2 == 0);
            int best = is_alice ? 0 : INT_MAX;

            for (int nxt = 0; nxt < n; ++nxt) {
                if ((mask & (1 << nxt)) == 0) {
                    int moves = dist[curr][nxt] + self(self, nxt, mask | (1 << nxt));
                    if (is_alice) {
                        best = max(best, moves);
                    } else {
                        best = min(best, moves);
                    }
                }
            }

            return memo[curr][mask] = best;
        };

        return dfs(dfs, n, 0);
    }
};