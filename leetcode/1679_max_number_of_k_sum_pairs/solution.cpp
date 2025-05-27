class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int result = 0;

        for (int num : nums) {

            if (freq[k - num] > 0) {
                result++;
                freq[k - num]--;

            } else {
                freq[num]++;
            }
        }

        return result;
    }
};
