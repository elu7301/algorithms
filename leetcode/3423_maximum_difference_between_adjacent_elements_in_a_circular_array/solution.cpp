class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int result = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {

            if (i == nums.size() - 1) {
                result = max(result, abs(nums[i] - nums[0]));
                break;
            }

            result = max(result, abs(nums[i + 1] - nums[i]));

        }

        return result;

    }
};