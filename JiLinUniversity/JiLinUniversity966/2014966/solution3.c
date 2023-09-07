//
// Created by 98708 on 2022/7/28.
//

//质因数分解式子
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "math.h"

// 判断是否为素数
bool isPrime(int num){
    if (num < 2) return false;
    for (int i = 2; i < sqrt(num); i++) {
        if (num%i == 0) return false;
    }
    return true;
}
// solution
void solution(int n){
    if (n < 2) {
        printf("0");
        return;
    }
    if (isPrime(n) == true) {
        // 如果n是素数
        printf("%d", n);
        return;
    }else{
        // 质因数分解
        int i = 2;
        while (n > 1){
            while (n%i == 0) {
                n = n / i;
                if (n == 1) {
                    printf("%d", i);
                }else {
                    printf("%d*", i);
                }
            }
            i++;
        }
    }
}

int main(){
//    int n;
//    scanf("%d", n);
    int n = 8;
    printf("%d = ", n);
    solution(n);
    return 0;
}