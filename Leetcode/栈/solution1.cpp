//
// Created by 98708 on 2022/10/3.
//

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

#define maxsize 1000000

class Solution {
public:
    bool istrue(char s, char a){
        if(s == '}' && a == '{') return true;
        if(s == ']' && a == '[') return true;
        if(s == ')' && a == '(') return true;

        return false;
    }

    bool isValid(string s) {
        int i = 1;
        char a[maxsize];
        int top = -1;
        a[++top] = s[0];
        while(i<s.size()){
            if(top >= 0 && istrue(s[i], a[top]) == true) {
                top--;
            }else{
                a[++top] = s[i];
            }

            i++;
        }
        return top==-1;
    }
};

/*
 * 第27行容易出错，if(top >= 0 && istrue(s[i], a[top]) == true) {
 * 需要先判断top指针是否是合法的，即是否是大于等于0的，
 * 因为当top等于-1时，无论如何，都是入栈，不能比较是否括号匹配
 * */