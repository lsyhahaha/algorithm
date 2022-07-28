//
// Created by 98708 on 2022/7/27.
//

#include "stdio.h"
#include "stdlib.h"

int main(){
    int A[20][10];
    int sum = 0;
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 10; j++) {
            scanf("%d", A[i][j]);
            if (i == 0 || i == 19 || j == 0 || j == 19) {
                sum += A[i][j];
            }
        }
    }
//    for (int i = 0; i < 20; i++) {
//        sum += A[i][0] + A[i][9];
//    }
//    for (int j = 0; j < 10; j++) {
//        sum += A[0][j] + A[19][j];
//    }
//    sum = sum - A[0][0] - A[0][9] -A[19][0] - A[19][9];
    printf("%f", sum/56);

    return 0;
}