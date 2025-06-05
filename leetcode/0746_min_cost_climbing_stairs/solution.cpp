class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int first = 0;
        int second = 0;
        int temp;

        for (int i = 2; i < n + 1; i++) {
            temp = min(first + cost[i - 2], second + cost[i - 1]);
            first = second;
            second = temp;

        }

        return second;
    }
};