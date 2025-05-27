class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;

        for (char c : t) {
            if (count < s.size() && c == s[count])
                count++;
        }

        return count == s.size();
    }
};
