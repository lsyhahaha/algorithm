//
// Created by 98708 on 2022/10/3.
//

/*32题*/

#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // 小镇法官的度为n-1
        vector<int> degrees(n + 1);
        int people = 0;
        for(int i = 0; i < n; i++){
            people = trust[i][1];
            degrees[people]++;
        }

        for(int i = 0; i < n; i++){
            if(degrees[i] == n-1) return i;
        }

        return -1;
    }
};

int main(){
    Solution a = Solution();
    vector<vector<int>> trust = {{1,2}};
    cout << a.findJudge(2, trust);

    return 0;
}