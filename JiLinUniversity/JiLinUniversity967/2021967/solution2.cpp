//
// Created by 98708 on 2022/10/5.
//

/*��ת2021�㷨��2
 * д������׺���ʽת��Ϊ��׺���ʽ���㷨*/

/*����˼·*/

//#include "bits/stdc++.h"
//#define maxsize 100
//using namespace std;
//
//string transf(string zhongzhui){
//    string ans;
//    int n = zhongzhui.length(), i = 0, top = -1;
//    char stack[maxsize];// ��ʼ��ջ
//
//    while(i<n){
//        char cur = zhongzhui[i++];
//
//        if(cur=='(' || cur == '+' || cur=='-' || cur == '/' || cur=='*'){
//            stack[++top] = cur; // ������ �Ӽ��˳���ջ
//            continue;
//        }
//        if(cur >= 'a' && cur <= 'z') {
//            ans += cur;
//            continue;
//        }
//
//        while(cur==')' && top > -1 && stack[top] != '('){
//            ans += stack[top--]; // ���������žͳ�ջ��ֱ������������
//        }
//        top--; // ����������
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