//
// Created by 98708 on 2022/6/27.
//

/*
 *  1：Variable-sized object may not be initialized报错，
 *  使用变量定义长度时，不可在定义时同时进行初始化赋值，需要在之后进行赋值,
 *  即为不能既用变量定义长度，如char str[a], a为变量；  然后同时给str赋值
 * */
#include "stdio.h"

int main(){
//    // 输入一个整型数组
//    int n = 3;
//    int a[n], i;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    // 输出一个整型数组
//    for (i = 0; i < n; i++) {
//        printf("%d\t", a[i]);
//    }

    int n = 20;
    char str[n];
//    for (int i = 0; i < n; ++i) {
//        str[i] = getchar();
//    }
    gets(str);
    puts(str);

    printf("\n冲进吉大！");
    return 0;
}