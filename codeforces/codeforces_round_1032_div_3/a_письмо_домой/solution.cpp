#include <bits/stdc++.h>

int main() {

    int t;
    std::cin >> t;

    while (t--) {
        int n, s;
        std::cin >> n >> s;

        std::vector<int> x(n);
        for (int i = 0; i < n; i++) {
            std::cin >> x[i];
        }

        int first = x.front();
        int last  = x.back();

        int dist  = last - first;
        int extra = std::min(std::abs(s - first), std::abs(s - last));

        std::cout << (dist + extra) << std::endl;
    }

    return 0;
}