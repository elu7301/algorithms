#include <iostream>
#include <vector>
#include <array>

int main() {

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<std::array<int, 3>> operations;

        for (int i = 1; i <= n; i++) {
            if (i > 1) {
                operations.push_back({ i, 1, i });
            }

            if (i < n) {
                operations.push_back({ i, i + 1, n });
            }
        }

        std::cout << operations.size() << std::endl;

        for (const auto &operation : operations) {
            std::cout
                << operation[0] << " "
                << operation[1] << " "
                << operation[2] << std::endl;
        }
    }

    return 0;
}