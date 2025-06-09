class Solution {
public:
    int findKthNumber(int n, int k) {
        long long curr = 1;
        k--;

        while (k > 0) {
            long long steps = count_steps(curr, curr + 1, n);

            if (steps <= k) {
                curr += 1;
                k -= steps;

            } else {
                curr *= 10;
                k -= 1;
            }
        }

        return curr;
    }

private:
    long long count_steps(long long first, long long last, int n) {
        long long steps = 0;

        while (first <= n) {
            steps += min((long long)n + 1, last) - first;
            first *= 10;
            last *= 10;
        }

        return steps;
    }
};
