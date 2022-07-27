//
// Created by 98708 on 2022/7/26.
//
#include <string.h>
#include "stdlib.h"
#include "stdio.h"
#define MAXSIZE 100

void Yanghui(int n){
    int A[n+1];
    for (int i = 0; i < n; i++) {
        A[i] = 1;
        for (int j = i - 1; j > 0; j--){
            A[j] = A[j-1] + A[j];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(){
    int n = 10; // 打印第十行
    Yanghui(n);
    return 0;
}