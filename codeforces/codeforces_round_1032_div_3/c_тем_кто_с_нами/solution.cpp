#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        int m0 = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] > m0) m0 = a[i][j];
            }
        }

        vector<vector<int>> m0_cols(n);
        vector<int> count_col(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == m0) {
                    m0_cols[i].push_back(j);
                    count_col[j]++;
                }
            }
        }

        int colset_size = 0;

        for (int j = 0; j < m; j++) {
            if (count_col[j] > 0) colset_size++;
        }

        int ans = m0;

        for (int i = 0; i < n; i++) {
            int sz = m0_cols[i].size();

            if (sz == 0) {

                if (colset_size <= 1) {
                    ans = m0 - 1;
                    break;
                }
                continue;
            }

            int unique_cnt = 0;
            for (int j : m0_cols[i]) {

                if (count_col[j] == 1) {
                    unique_cnt++;
                }
            }

            int col_out = colset_size - unique_cnt;

            if (col_out <= 1) {
                ans = m0 - 1;
                break;
            }
        }
        cout << ans << std::endl;
    }
    return 0;
}