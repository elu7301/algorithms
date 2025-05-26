#include <iostream>
#include <vector>

const int c = (1 << 16);

void radix_sort(std::vector<int>& a) {
    int n = (int)a.size();
    std::vector<int> b[c];

    for (int i = 0; i < n; i++)
        b[a[i] % c].push_back(a[i]);

    int k = 0;
    for (int i = 0; i < c; i++) {
        for (size_t j = 0; j < b[i].size(); j++)
            a[k++] = b[i][j];
        b[i].clear();
    }

    for (int i = 0; i < n; i++)
        b[a[i] / c].push_back(a[i]);

    k = 0;
    for (int i = 0; i < c; i++) {
        for (size_t j = 0; j < b[i].size(); j++)
            a[k++] = b[i][j];
    }
}

int main() {
    std::vector<int> a = {5, 2, 1, 3, 1};

    radix_sort(a);

    for (int i = 0; i < (int)a.size(); i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
