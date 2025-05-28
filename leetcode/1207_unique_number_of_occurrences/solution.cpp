class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> counter;
        unordered_set<int> frequencies;

        for (int num: arr) counter[num]++;

        for (const auto& [key, freq] : counter) {

            if (frequencies.count(freq)) return false;
            frequencies.insert(freq);
        }

        return true;
    }
};