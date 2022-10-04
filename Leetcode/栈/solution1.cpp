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
 * ��27�����׳���if(top >= 0 && istrue(s[i], a[top]) == true) {
 * ��Ҫ���ж�topָ���Ƿ��ǺϷ��ģ����Ƿ��Ǵ��ڵ���0�ģ�
 * ��Ϊ��top����-1ʱ��������Σ�������ջ�����ܱȽ��Ƿ�����ƥ��
 * */