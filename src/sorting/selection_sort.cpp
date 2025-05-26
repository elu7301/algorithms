#include <iostream>
#include <algorithm>

void selection_sort(int* a, int n) {
    for (int k = 0; k < n - 1; k++) {
        for (int j = k + 1; j < n; j++) {
            if (a[k] > a[j]) {
                std::swap(a[k], a[j]);
            }
        }
    }
}

int main() {
    int a[5] = {5, 2, 1, 3, 1};

    selection_sort(a, 5);

    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
