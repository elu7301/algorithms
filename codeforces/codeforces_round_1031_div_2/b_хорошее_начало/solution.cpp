#include <iostream>
#include <cmath>

int main() {

    int t;
    std::cin >> t;

    while(t--){

        long long w, h, a, b;
        std::cin >> w >> h >> a >> b;

        long long x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;

        long long dx = std::llabs(x1 - x2);
        long long dy = std::llabs(y1 - y2);

        bool ok_x = (dx % a == 0);
        bool ok_y = (dy % b == 0);

        bool stripe_x = ok_x && (dx >= a || ok_y);
        bool stripe_y = ok_y && (dy >= b || ok_x);

        if (stripe_x || stripe_y)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;

    }
    return 0;
}