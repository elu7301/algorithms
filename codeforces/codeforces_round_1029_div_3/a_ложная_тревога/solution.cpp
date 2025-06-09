#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, x;
        std::cin >> n >> x;

        int start = -1;
        int end = -1;

        for (int i = 0; i < n; ++i) {

            int a;
            std::cin >> a;

            if (a == 1) {
                if (start == -1) start = i;
                end = i;
            }
        }

        std::cout << ((end - start + 1 <= x) ? "YES" : "NO") << std::endl;
    }

    return 0;
}
