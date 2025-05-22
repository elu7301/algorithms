class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long first  = LONG_MAX;
        long second = LONG_MAX;

        for (int num : nums) {

            if (num <= first) {
                first = num;
            }

            else if (num <= second) {
                second = num;
            }

            else {
                return true;
            }

        }
        return false;
    }
};