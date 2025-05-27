class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_length = 0;
        int zero_count = 0;
        int start = 0;

        for (int end = 0; end < nums.size(); ++end) {
            if (nums[end] == 0) zero_count++;

            while (zero_count > 1) {
                if (nums[start] == 0) zero_count--;
                start++;
            }

            max_length = max(max_length, end - start);
        }

        return max_length;
    }
};
