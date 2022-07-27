//
// Created by 98708 on 2022/7/27.
//
//斐波拉契数列
#include "stdio.h"
#include "stdlib.h"
#define MAXSIZE 1000

int main(){
    int n;
    int f[MAXSIZE];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if ( i == 0 || i == 1){
            f[i] = 1;
            continue;
        }
        f[i] = f[i-1] + f[i-2];
    }
    printf("f[%d] = %d", n, f[n-1]);
    return 0;
}