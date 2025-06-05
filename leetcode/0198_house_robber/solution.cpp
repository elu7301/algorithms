class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int second = 0;
        int temp;

        for (int i = 0; i < n; i++) {
            temp = max(first + nums[i], second);
            first = second;
            second = temp;
        }

        return second;
    }
};