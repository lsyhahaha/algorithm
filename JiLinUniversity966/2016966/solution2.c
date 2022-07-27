//
// Created by 98708 on 2022/7/27.
//
#include <string.h>
#include "stdlib.h"
#include "stdio.h"
#define M 10
#define N 10

void BubbleSort(int pInt[M*N]);
void print(int pInt[M][N]);

void sort(int A[M][N]) {
    int B[M*N];
    memset(B, 0, sizeof (B));
    // 将A中元素放入B中
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            B[i*N+j] = A[i][j];
        }
    }
    BubbleSort(B);
    int k = M*N-1;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = B[k--];
        }
    }
}

void BubbleSort(int pInt[M*N]) {
    for (int i = 0; i < M*N; i++) {
        for (int j = 0; j < M*N; j++) {
            if (pInt[i] > pInt[j]) {
                int temp = pInt[i];
                pInt[i] = pInt[j];
                pInt[j] = temp;
            }
        }
    }
}

void print(int pInt[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", pInt[i][j]);
        }
        printf("\n");
    }
}



int main(){
    int A[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = M*N - (i*N+j);
        }
    }
    print(A);
    sort(A);
    print(A);
}