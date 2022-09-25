//
// Created by 98708 on 2022/9/24.
//

/*编写10X10的螺旋矩阵*/

#include "bits/stdc++.h"

void show(int A[][10], int m, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

void luoxuan(int a[][10], int n){
    int num = 1;
    for(int i=0;i<=n/2;i++)//控制轮数
    {
        for(int j=i;j<n-i;j++)//赋值上行
            a[i][j]=num++;
        for(int j=i+1;j<n-i;j++)//赋值右行
            a[j][n-i-1]=num++;
        for(int j=n-i-2;j>=i;j--)//赋值下行
            a[n-i-1][j]=num++;
        for(int j=n-i-2;j>i;j--)//赋值左行
            a[j][i]=num++;
    }
}

int main(){
    int A[10][10] = {0};
    luoxuan(A,10);
    show(A, 10, 10);

    return 0;
}