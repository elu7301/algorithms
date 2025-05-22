class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        string result;
        result.reserve(n + m);

        int i = 0;
        while (i < n && i < m) {
            result.push_back(word1[i]);
            result.push_back(word2[i]);
            i++;
        }

        if (i < n) {
            result.append(word1.substr(i));
        } else if (i < m) {
            result.append(word2.substr(i));
        }

        return result;
    }
};