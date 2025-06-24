class Solution {
public:
    int maxDifference(string s) {
        vector<int> count_arr(26);
        int max_value = 0;
        int min_value = s.size();

        for (char c : s) {
            count_arr[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (count_arr[i] % 2 == 1) {
                max_value = max(max_value, count_arr[i]);
            }

            if (count_arr[i] % 2 == 0 && count_arr[i] > 0) {
                min_value = min(min_value, count_arr[i]);
            }
        }

        return max_value - min_value;

    }
};