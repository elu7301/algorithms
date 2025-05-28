class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        if (word1.size() != word2.size()) return false;

        vector<int> counter1(26, 0), counter2(26, 0);

        for (char c : word1) counter1[c - 'a']++;
        for (char c : word2) counter2[c - 'a']++;

        for (int i = 0; i < 26; i++) {
            if ((counter1[i] == 0 && counter2[i] != 0)
            || (counter1[i] != 0 && counter2[i] == 0)) return false;
        }

        sort(counter1.begin(), counter1.end());
        sort(counter2.begin(), counter2.end());

        for (int i = 0; i < 26; i++) {
            if (counter1[i] != counter2[i]) return false;
        }

        return true;
    }
};
