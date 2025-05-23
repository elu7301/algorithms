class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();

        for (int i = 0; i < m && n > 0; ++i) {

            if (flowerbed[i] == 0) {

                bool empty_left  = (i == 0) || (flowerbed[i - 1] == 0);
                bool empty_right = (i == m - 1) || (flowerbed[i + 1] == 0);

                if (empty_left && empty_right) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }

        return (n <= 0);
    }
};