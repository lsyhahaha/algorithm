//
// Created by 98708 on 2022/9/24.
//

/*��д10X10����������*/

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
    for(int i=0;i<=n/2;i++)//��������
    {
        for(int j=i;j<n-i;j++)//��ֵ����
            a[i][j]=num++;
        for(int j=i+1;j<n-i;j++)//��ֵ����
            a[j][n-i-1]=num++;
        for(int j=n-i-2;j>=i;j--)//��ֵ����
            a[n-i-1][j]=num++;
        for(int j=n-i-2;j>i;j--)//��ֵ����
            a[j][i]=num++;
    }
}

int main(){
    int A[10][10] = {0};
    luoxuan(A,10);
    show(A, 10, 10);

    return 0;
}