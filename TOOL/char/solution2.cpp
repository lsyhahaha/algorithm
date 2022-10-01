//
// Created by 98708 on 2022/9/29.
//

/*面试题 01.09. 字符串轮转
 * 字符串轮转。给定两个字符串s1和s2，请编写代码检查s2是否为s1旋转而成（比如，waterbottle是erbottlewat旋转后的字符串）。*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        int m = s1.length(), n = s2.length();
        if(m!=n) return false; // 如果字符串长度不相等，那么，肯定不是轮转得来的
        if(n==0) return true;

        for(int k=0; k<n; k++){
            bool flag = true;
            for(int j=0; j<n;j++){
                if(s1[j]!=s2[(j+k)%n]) flag = false;
            }
            if(flag==true) return true;
        }

        return false;
    }
};

int main(){
    Solution a = Solution();
    cout<< a.isFlipedString("waterbottle", "erbottlewat") << endl;
    return 0;
}