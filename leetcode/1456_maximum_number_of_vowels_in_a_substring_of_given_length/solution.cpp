class Solution {
public:
    int maxVowels(string s, int k) {
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        int max_value = 0;
        int current_value = 0;
        int start = 0;

        for (int end = 0; end < s.size(); end++){
            while ((end - start) >= k) {
                current_value -= isVowel(s[start]);
                start++;
            }

            current_value += isVowel(s[end]);
            max_value = max(max_value, current_value);

        }

        return max_value;

    }
};