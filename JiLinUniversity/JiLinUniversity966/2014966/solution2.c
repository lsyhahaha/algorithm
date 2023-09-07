//
// Created by 98708 on 2022/7/28.
//

//统计数组中的各个数值出现的次数
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define MAXSIZE 100

// 函数声明
void Time(int A[10], int length);

// 主函数
int main(){
    int A[10] = {3,5,3,3,10,7, 7,5,3,7};
    Time(A, 10);
    return 0;
}
// Time的函数体
void Time(int A[10], int length) {
    int hash[MAXSIZE];
    memset(hash, 0, sizeof (hash));
    for (int i = 0; i < length; i++){
        hash[A[i]]++;
    }
    for (int i = 0; i < MAXSIZE; i++) {
        if (hash[i] != 0) {
            printf("%d : %d次\n", i, hash[i]);
        }
    }
}
