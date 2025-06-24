#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long long k, a, b, x, y;
        std::cin >> k >> a >> b >> x >> y;

        long long total = 0;

        if (x > y) {
            std::swap(a, b);
            std::swap(x, y);
        }

        while (k >= a) {
            long long cnt = (k - a) / x + 1;
            total += cnt;
            k -= cnt * x;
        }

        while (k >= b) {
            long long cnt = (k - b) / y + 1;
            total += cnt;
            k -= cnt * y;
        }

        std::cout << total << std::endl;
    }

    return 0;
}