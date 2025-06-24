#include <bits/stdc++.h>

int main() {

    int t;
    std::cin >> t;

    while (t--) {

        int n;
        std::cin >> n;

        std::string s;
        std::cin >> s;

        std::vector<int> pref(26, 0);
        std::vector<int> suff(26, 0);

        for (int i = 2; i < n; i++) {
            suff[s[i] - 'a']++;
        }

        pref[s[0] - 'a']++;

        bool res = false;

        for (int i = 1; i <= n - 2; i++) {

            int c = s[i] - 'a';

            if (pref[c] > 0 || suff[c] > 0) {
                res = true;
                break;
            }

            pref[c]++;
            suff[s[i + 1] - 'a']--;
        }

        std::cout << (res ? "Yes" : "No") << std::endl;
    }
    return 0;
}