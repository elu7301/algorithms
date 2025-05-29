class Solution {
public:
    string removeStars(string s) {
        string result;

        for (auto c : s) {
            if (c != '*') result += c;
            else result.pop_back();
        }

        return result;
    }
};