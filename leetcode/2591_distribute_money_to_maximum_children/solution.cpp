class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children) {
            return -1;
        }

        int res = 0;
        money -= children;

        while (money > 0 && res < children) {

            if (res == children - 1) {
                if (money == 7) {
                    res++;
                }

                else if (money == 3) {
                    res--;
                }

                break;
            }

            if (money >= 7) {
                res++;
                money -= 7;
                continue;

            }

            break;

        }

    return res;


    }
};