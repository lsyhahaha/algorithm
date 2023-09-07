//
// Created by 98708 on 2022/7/27.
//
#include "stdio.h"
#include "stdlib.h"

double f(double x){
    return x*x*x-x*x-1;
}

void solution(){
    double left = 0;
    double right = 3;
    double mid;
    while (left < right){
        mid = left + (right - left)/2;
        if (f(mid) == 0) {
            printf("x = %f", mid);
            break;
        }
        if (f(left) * f(mid) > 0) {
            // 如果中点对应的函数值与左边函数值同号，说明该区间内无实根，左指针右移
            left = mid;
        }else if (f(right)*f(mid) > 0) {
            // 如果中点对应的函数值与右边函数值同号，说明该区间内无实根，右指针左移
            right = mid;
        }
    }
}

int main(){
    solution();
    return 0;
}