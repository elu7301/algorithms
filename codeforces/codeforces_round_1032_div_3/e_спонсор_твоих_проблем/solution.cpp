#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        string l, r;
        cin >> l >> r;

        int d = l.size();
        const int INF = 1e9;

        static int dp[12][2][2];

        for (int pos = 0; pos <= d; pos++) {
            for (int tight_l = 0; tight_l < 2; tight_l++) {
                for (int tight_r = 0; tight_r < 2; tight_r++) {
                    dp[pos][tight_l][tight_r] = INF;
                }
            }
        }

        dp[0][1][1] = 0;

        for (int pos = 0; pos < d; pos++) {
            int digit_l = l[pos]  - '0';
            int digit_r = r[pos] - '0';

            for (int tight_l = 0; tight_l < 2; tight_l++) {
                for (int tight_r = 0; tight_r < 2; tight_r++) {

                    int cur = dp[pos][tight_l][tight_r];
                    if (cur == INF) continue;

                    int min_dig = tight_l ? digit_l : 0;
                    int max_dig = tight_r ? digit_r : 9;

                    for (int dig = min_dig; dig <= max_dig; dig++) {

                        int next_tight_l = tight_l && (dig == digit_l);
                        int next_tight_r = tight_r && (dig == digit_r);
                        int add_cost = (dig == digit_l) + (dig == digit_r);

                        dp[pos+1][next_tight_l][next_tight_r] = min(
                            dp[pos+1][next_tight_l][next_tight_r],
                            cur + add_cost
                        );
                    }
                }
            }
        }

        int ans = INF;
        for (int tight_l = 0; tight_l < 2; tight_l++) {
            for (int tight_r = 0; tight_r < 2; tight_r++) {
                ans = min(ans, dp[d][tight_l][tight_r]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}