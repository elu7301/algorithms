class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;

        for (int a : asteroids) {
            bool alive = true;

            while (!stack.empty() && a < 0 && stack.back() > 0) {

                if (stack.back() < -a) {
                    stack.pop_back();

                } else if (stack.back() == -a) {
                    stack.pop_back();
                    alive = false;
                    break;

                } else {
                    alive = false;
                    break;
                }
            }

            if (alive) stack.push_back(a);
        }

        return stack;
    }
};
