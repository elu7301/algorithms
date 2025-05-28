class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_value = 0;
        int current_value = 0;

        for (auto num : gain) {
            current_value += num;
            max_value = max(max_value, current_value);
        }

        return max_value;

    }
};