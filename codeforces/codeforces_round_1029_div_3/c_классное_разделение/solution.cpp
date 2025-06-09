#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++) {
            std::cin >> arr[i];
        }

        std::vector<int> last_occ(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            last_occ[arr[i]] = i;
        }

        std::vector<char> seen(n + 1, false);
        std::vector<char> needed(n + 1, false);
        std::vector<int> curr_elems;
        std::vector<int> prev_elems;

        int need_rem = 0;
        int ans = 0;
        int min_last = n + 1;

        for (int i = 1; i <= n; i++) {

            int x = arr[i];

            if (!seen[x]) {
                seen[x] = true;
                curr_elems.push_back(x);
                min_last = std::min(min_last, last_occ[x]);
            }

            if (needed[x]) {
                needed[x] = false;
                need_rem--;
            }

            if (need_rem == 0 && i < min_last) {

                ans++;
                prev_elems.clear();
                prev_elems.reserve(curr_elems.size());

                for (int y : curr_elems) {
                    prev_elems.push_back(y);
                }

                for (int y : curr_elems) {
                    seen[y] = false;
                }

                curr_elems.clear();
                need_rem = static_cast<int>(prev_elems.size());

                for (int y : prev_elems) {
                    needed[y] = true;
                }

                min_last = n + 1;
            }
        }

        ans++;
        std::cout << ans << std::endl;
    }

    return 0;
}
