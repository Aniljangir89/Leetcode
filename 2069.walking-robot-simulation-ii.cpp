/*
 * @lc app=leetcode id=2069 lang=cpp
 *
 * [2069] Walking Robot Simulation II
 */

// @lc code=start
class Robot {
public:
    int n, m;
    Robot(int width, int height) {
        m = width;
        n = height;
    }
    vector<string> dir = {"North", "East", "South", "West"};
    int dir_idx = 1;
    int i = 0, j = 0;
    void step(int num) {
        int peri = 2 * (m + n - 2);
        num %= peri;
        if (num == 0) {
            if (i == 0 && j == 0) {
                dir_idx = 2; // South
            }
            return;
        }
        while (num > 0) {
            if (dir_idx == 1) { // East
                if (j + 1 < m) {
                    j++;
                    num--;
                } else
                    dir_idx = 0;
            } else if (dir_idx == 0) { // North
                if (i + 1 < n) {
                    i++;
                    num--;
                } else
                    dir_idx = 3;
            } else if (dir_idx == 3) { // West
                if (j - 1 >= 0) {
                    j--;
                    num--;
                } else
                    dir_idx = 2;
            } else { // South
                if (i - 1 >= 0) {
                    i--;
                    num--;
                } else
                    dir_idx = 1;
            }
        }
    }

    vector<int> getPos() { return {j, i}; }

    string getDir() { return dir[dir_idx]; }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */
/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */
// @lc code=end

