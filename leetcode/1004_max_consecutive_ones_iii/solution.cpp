class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_value = 0;
        int current_zeroes = 0;
        int start = 0;

        for (int end = 0; end < nums.size(); end++) {
            if (nums[end] == 0) {
                current_zeroes++;
            }

            while (current_zeroes > k) {
                if (nums[start] == 0) {
                    current_zeroes--;
                }
                start++;
            }

            max_value = max(max_value, end - start + 1);
        }

        return max_value;
    }
};
