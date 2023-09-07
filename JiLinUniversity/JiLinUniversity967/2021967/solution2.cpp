//
// Created by 98708 on 2022/10/5.
//

/*软转2021算法题2
 * 写出将中缀表达式转化为后缀表达式的算法*/

/*解题思路*/

//#include "bits/stdc++.h"
//#define maxsize 100
//using namespace std;
//
//string transf(string zhongzhui){
//    string ans;
//    int n = zhongzhui.length(), i = 0, top = -1;
//    char stack[maxsize];// 初始化栈
//
//    while(i<n){
//        char cur = zhongzhui[i++];
//
//        if(cur=='(' || cur == '+' || cur=='-' || cur == '/' || cur=='*'){
//            stack[++top] = cur; // 遇到（ 加减乘除入栈
//            continue;
//        }
//        if(cur >= 'a' && cur <= 'z') {
//            ans += cur;
//            continue;
//        }
//
//        while(cur==')' && top > -1 && stack[top] != '('){
//            ans += stack[top--]; // 遇到右括号就出栈，直至遇到左括号
//        }
//        top--; // 弹出左括号
//    }
//    while(top != -1) ans += stack[top--];
//
//    return ans;
//}
//
//int main(){
//    string houzhui = transf("a+b*(c-d)-e/f");
//    cout<< houzhui;
//
//    return 0;
//}