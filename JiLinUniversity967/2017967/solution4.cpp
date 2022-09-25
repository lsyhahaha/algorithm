//
// Created by 98708 on 2022/9/21.
//

/*����m��n��(m,n>1)���������ɵľ��󣬱�д���򽫴˾�����ֵС�ڵ���0��Ԫ�����ڵ��к����ϵ�����Ԫ����Ϊ0���������
 * ע�⣺�к��кű�����
 */

#include "stdio.h"
#include "bits/stdc++.h"
#define M 5
#define N 5

void SetZero(int A[][N]){ // c/c++���鱾�����ֻ����
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