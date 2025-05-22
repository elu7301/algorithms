class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> value_to_index;

        for (int i = 0; i < nums.size(); ++i) {

            if (value_to_index.count(target - nums[i])) {
                return { value_to_index[target - nums[i]], i };
            }

            value_to_index[nums[i]] = i;
        }

        return {};
    }
};
