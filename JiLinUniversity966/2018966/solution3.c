//
// Created by 98708 on 2022/7/26.
//
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void ToArray(int pInt[4], int n);
void BubbleSort(int pInt[4], int i);
void kabuleka();

void kabuleka(){
    int n, max, min;
    int A[4];
    printf("请输入一位四位数：\n");
    scanf("%d", &n); //输入一个四位数
    do{
        ToArray(A, n);//将数字转化为一维数组
        BubbleSort(A,4);
        int max = 0, min = 0;
        for (int i = 0; i<4; i++){
            max = max * 10 + A[3-i];
            min = min * 10 + A[i];
        }
        printf("%d - %d = %d\n", max, min, max-min);
        n = max-min;
    }while(n != 6174);
}

void BubbleSort(int A[4], int n) {
    // 对A[0..n-1]排序(逆序)
    for (int i =0; i < 4; i++){
        for (int j = 0; j < 4; j++) {
            if (A[i] < A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void ToArray(int A[4], int n) {
    for (int i = 0; i < 4; i++){
        A[i] = n % 10;
        n /= 10;
    }
}

int main(){
    kabuleka();
    return 0;
}