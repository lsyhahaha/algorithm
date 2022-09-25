//
// Created by 98708 on 2022/9/21.
//

/*设有m行n列(m,n>1)的整数构成的矩阵，编写程序将此矩阵中值小于等于0的元素所在的行和列上的所有元素置为0，并输出。
 * 注意：行号列号别搞混了
 */

#include "stdio.h"
#include "bits/stdc++.h"
#define M 5
#define N 5

void SetZero(int A[][N]){ // c/c++数组本身就是只传递
    bool r[M] = {false};
    bool c[N] = {false};
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if (A[i][j] == 0){
                r[i] = true;
                c[j] = true;
            }
        }
    }

    for (int i = 0; i < M; i++){
        if (r[i] == false) continue;
        int row = i;
        for (int column = 0; column < N; column++){
            A[i][column] = 0;
        }
    }
    for (int j = 0; j < N; j++){
        if (c[j] == false) continue;
        int col = j;
        for (int row = 0; row < M; row++){
            A[row][j] = 0;
        }
    }
}

void show(int A[][N]){
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%2d ",A[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[M][N]={
            11,12,13,14,15,
            21,0,23,24,25,
            31,32,33,34,35,
            41,42,43,-1,45,
            51,52,53,0,55
    };
    SetZero(a);
    show(a);

    return 0;
}