//
// Created by 98708 on 2022/10/3.
//

/*32Ã‚*/

#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int maxans = 0;
        stack<int> stk; // ’ª
        stk.push(-1); // »Î’ª -1
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                stk.push(i);
            } else {
                stk.pop();
                if (stk.empty()) {
                    stk.push(i);
                } else {
                    maxans = max(maxans, i - stk.top());
                }
            }
        }
        return maxans;
    }
};

int main(){
    Solution s = Solution();
    int n = s.longestValidParentheses(")()(()()))");
    cout << n;
    return 0;
}