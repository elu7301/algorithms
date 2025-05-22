class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_value = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        result.reserve(candies.size());

        for (int num : candies) {
            result.push_back(num + extraCandies >= max_value);
        }

        return result;
    }
};