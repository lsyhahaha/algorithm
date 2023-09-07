//
// Created by 98708 on 2022/7/26.
//
/*
 * 编写完整的程序，求解百鸡百钱问题
 * 鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一。百钱买百鸡， 问鸡翁，鸡母，鸡雏各
 * */
#include <stdio.h>
#include <stdlib.h>

int main(){
    // 鸡翁，鸡母，鸡雏 x, y, z
    for (int x = 0; x <= 20; x++) {
        for (int y = 0; y <= 33; y++) {
            int z = 100 - x - y;
            if (5*x + 3*y + z/3 == 100) {
                printf("可以买%d只鸡翁，%d只鸡母 %d只鸡雏\n", x, y, z);
            }
        }
    }

    return 0;
}