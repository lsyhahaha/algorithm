//
// Created by 98708 on 2022/7/26.
//
#include "stdio.h"
#include "stdlib.h"

int main(){
    int n = 987312;
    int ans = 0, data;
    int carry = 1;
    while (n != 0){
        data = n%10; // 记录当前数字各位的值
        if (data%2 == 1) {
            // 如果是奇数
            ans += carry * data;
            carry = carry * 10;
        }
        n = n / 10;
    }
    printf("ans = %d", ans);
}