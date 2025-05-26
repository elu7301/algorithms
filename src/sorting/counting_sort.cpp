#include <iostream>

void counting_sort(int* a, int n) {
    int c[100] = {0};

    for (int i = 0; i < n; i++) {
        c[a[i]]++;
    }

    int k = 0;
    for (int i = 0; i < 100; i++) {
        while (c[i]--) {
            a[k++] = i;
        }
    }
}

int main() {
    int a[8] = {5, 2, 1, 3, 1, 99, 0, 42};

    counting_sort(a, 8);

    for (int i = 0; i < 8; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
