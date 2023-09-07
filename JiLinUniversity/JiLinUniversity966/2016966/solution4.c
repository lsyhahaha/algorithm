//
// Created by 98708 on 2022/7/27.
//
#include "stdlib.h"
#include "stdbool.h"

bool istrue(char* str, double num){
    // 第一个参数为字符串，第二个参数为一个实数，看题目要求float或者double均可满足
    double a = 0, b = 0; // a为整数部分，b为小数部分
    int i = 0;
    while(str[i] != '\0'){
        // 对整数部分进行翻译
        if (str[i] >= '\0' && str[i] <= '9'){
            a = a * 10 + str[i] - '0';
        } else{
            break;
        }
        i++;
    }
    if (str[i] != '\0') {
        // 若字符串并非之后数字字符
        if (str[i] == '.') {
            // 若遇到了小数点，则对小鼠部分进行翻译
            i++;//跳过小数点位
            double time = 0.1; // 小数点后的位数
            while(str[i] != '\0'){
                if(str[i] >= '0' && str[i] <= '9') {
                    // 翻译小数部分
                    b = b + (str[i] - '0') * time;
                    time = time * 0.1;
                }else{
                    return false;
                }
                i++;
            }
        }else{
            // 若未遇到小数点，整数部分之后为其他字符
            return false;
        }
    }
    if (a + b > num) // 整数部分与小数部分相加，若大于参数num,则返回真，否则返回假；
        return true;

    return false;
}