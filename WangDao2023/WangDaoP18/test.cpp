//
// Created by 98708 on 2023/9/5.
//

#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            sort(grid[i].begin(), grid[i].end());
        }
        int res = 0;
        for (int j = 0; j < n; j++) {
            int mx = 0;
            for (int i = 0; i < m; i++) {
                mx = max(mx, grid[i][j]);
            }
            res += mx;
        }
        return res;
    }
};



int main() {
    Solution object = Solution();

    // 测试用例 1: 基本情况
    vector<vector<int>> grid1 = {
            {3, 2, 1},
            {6, 5, 4},
            {9, 8, 7}
    };
    int result1 = object.deleteGreatestValue(grid1);
    cout << "Result 1: " << result1 << endl;  // 预期输出：33

    // 测试用例 2: 全零矩阵
    vector<vector<int>> grid2 = {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}
    };
    int result2 = object.deleteGreatestValue(grid2);
    cout << "Result 2: " << result2 << endl;  // 预期输出：0

    // 测试用例 3: 单行矩阵
    vector<vector<int>> grid3 = {
            {9, 8, 7}
    };
    int result3 = object.deleteGreatestValue(grid3);
    cout << "Result 3: " << result3 << endl;  // 预期输出：24

    // 测试用例 4: 单列矩阵
    vector<vector<int>> grid4 = {
            {3},
            {6},
            {9}
    };
    int result4 = object.deleteGreatestValue(grid4);
    cout << "Result 4: " << result4 << endl;  // 预期输出：18

    return 0;
}
