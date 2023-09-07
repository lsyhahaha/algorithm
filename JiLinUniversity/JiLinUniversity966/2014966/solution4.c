//
// Created by 98708 on 2022/7/28.
//
#include "stdio.h"
#include "stdlib.h"
int A[10][10];

void init(int A[10][10]){
    int count = 1, row = 0, col = 0; // count为计数器， row, col为每次打印的起始下标
    while(row <= 9 && col <= 9) {
        int i = row, j = col;
        while (i >= 0 && j <= 9) {
            // 打印以[row, col]为起始点的一斜条
            A[i][j] = count;
            count++;
            i--;
            j++;
        }
        if (row < 9) {
            row++;
        } else {
            col++;
        }
    }
}

void print(int A[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", A[i][j]);
            if (j == 9) {
                printf("\n");
            }
        }
    }
}

int main(){
    init(A);
    print(A);
    return 0;
}