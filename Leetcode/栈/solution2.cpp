//
// Created by 98708 on 2022/10/3.
//

/*32Ã‚*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;
#define maxsize 3*10000

class Solution {
public:
    bool istrue(char s, char a){
        if(s == '}' && a == '{') return true;
        if(s == ']' && a == '[') return true;
        if(s == ')' && a == '(') return true;

        return false;
    }

    int longestValidParentheses(string s) {
        int stack[maxsize]; // ’ª
        int i = 0, top = -1, res = 0;
        while(i<s.size()){
            int maxcur = 0;
            while(top >= 0 && istrue(s[i], stack[top])){
                top--;
                i++;
                maxcur++;
            }
            if(res < maxsize) res = maxsize;

            if(i>s.size()) break;
            stack[++top] == s[i];
            i++;
        }


        return res;
    }
};