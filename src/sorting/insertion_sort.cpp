#include <iostream>
#include <algorithm>

void insertion_sort(int* a, int n) {
    for (int k = 1; k < n; k++) {
        for (int i = k; i > 0 && a[i - 1] > a[i]; i--) {
            std::swap(a[i], a[i - 1]);
        }
    }
}

int main() {
    int a[5] = {5, 2, 1, 3, 1};

    insertion_sort(a, 5);

    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
