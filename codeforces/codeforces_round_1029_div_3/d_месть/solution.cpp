#include <iostream>
#include <vector>

int main() {

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<long long> arr(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        bool is_arithmetic = true;
        long long difference = arr[1] - arr[0];

        for (int i = 2; i < n; ++i) {
            if (arr[i] - arr[i - 1] != difference) {
                is_arithmetic = false;
                break;
            }
        }

        if (!is_arithmetic) {
            std::cout << "NO" << std::endl;
            continue;
        }

        long long constant_term = arr[0] - difference;
        long long divisor = n + 1;

        if (constant_term % divisor != 0) {
            std::cout << "NO" << std::endl;
            continue;
        }

        long long y_ops = constant_term / divisor;
        long long x_ops = y_ops + difference;

        if (y_ops < 0 || x_ops < 0) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::cout << "YES" << std::endl;
        }
    }

    return 0;
}
