#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool static reorderedPowerOf2(int n) {
        // 将n从小到大排列
        string num = to_string(n);

        for (int i = 1; i < 1e9; i *= 2) {
            string num_i = to_string(i);

            if (num == num_i) return true;
        }

        return false;
    }
};

int main(){
    Solution a;
    bool flag  = a.reorderedPowerOf2(32);
    cout << flag << endl;

    return 0;
}