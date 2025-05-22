class Solution {
public:
    string reverseVowels(string s) {
        auto is_vowel = [&](char c) {

            c = tolower(c);
            return c=='a' || c=='e' || c=='i'
                || c=='o' || c=='u';
        };

        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            while (i < j && !is_vowel(s[i])) {
                i++;
            }

            while (i < j && !is_vowel(s[j])) {
                j--;
            }

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }

        }

        return s;
    }
};
