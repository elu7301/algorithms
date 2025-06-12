#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while(t--) {
        int n, k;
        std::cin >> n >> k;
        std::string s;

        for (int i = 0; i < k; i++) {
            s += "1";
        }

        for (int i = 0; i < n - k; i++) {
            s += "0";
        }

        std::cout << s << std::endl;

    }

    return 0;
}