//
// Created by 98708 on 2022/6/28.
//

// 计算100-200以内的所有素数

#include "stdio.h"
#include "math.h"
int isPrem(int i);

int main(){
    /*思路： ① 构造函数判断是否为素数
     *      ② 遍历100-200并判断是否为素数
     * */
    int count = 1;
    for (int i = 100; i <= 200; ++i) {
        if (isPrem(i) == 1) {
            printf("%d ", i);

            if (count%5 == 0) {
                printf("\n");
            }
            count++;
        }
    }
}

int isPrem(int n) {
    // 判断n是否为素数
    for (int i = 2; i < sqrt(n); ++i) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}
