#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    for (int  i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        std::cout << 1 << " ";

        for (int i = n; i >= 2; --i) {
            std::cout << i << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}