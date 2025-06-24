#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<int,int>> ops;

        for(int i = 0; i < n; i++) {
            if(a[i] > b[i]) {
                ops.emplace_back(3, i+1);
                swap(a[i], b[i]);
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j+1 < n; j++) {

                if(a[j] > a[j+1]) {

                    ops.emplace_back(1, j+1);
                    swap(a[j], a[j+1]);
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j+1 < n; j++) {

                if(b[j] > b[j+1]) {

                    ops.emplace_back(2, j+1);
                    swap(b[j], b[j+1]);
                }
            }
        }

        cout << ops.size() << endl;

        for(auto &p : ops) {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}