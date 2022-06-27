//
// Created by 98708 on 2022/6/28.
//

// 2.7 判断一个数, 加上100是完全平方数,加上168也是完全平方数

#include<stdio.h>
#include<math.h>

int isWanQuan(int i);
int twoSam(int i);

int main(){
    for (int i = 0; i <= 1000; i++) {
        if (isWanQuan(i+100) == 1 && isWanQuan(i+168) == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

int isWanQuan(int n) {
    for (int i = 0; i <= n; i++) {
        if (i*i == n) {
            return 1;
        }
    }
    return 0;
}
