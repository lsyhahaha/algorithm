//
// Created by 98708 on 2022/9/20.
//

// ��д������������һ��������n, n = d[1,2...m], �����d[1,2,...m]���������
/*
 * �㷨˼�룺
 * �ٽ�n�ĸ�����λ���������У�
 * �ڶ�������д�С��������
 * �۴Ӻ���ǰ����õ����ֵ
*/

#include<stdio.h>
#define N 100

void Sort(int A[], int n){
    // ������[0..n]����
    int temp = 0;
    for (int i = 0; i<n; i++){
        for (int j = i + 1; j<n; j++){
            if (A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main(){
    int n, sum;              // sumΪ����������
    n = 123456789;
//    scanf("%d", &n); // ��������һ��������n
    int A[N]={0};
    int i = 0;
    while(n != 0){
        A[i++] = n%10;
        n /= 10;
    }
    Sort(A, i);
    for (int j = i-1; j >= 0; j--){
        sum = sum*10 + A[j];
    }
    printf("result = %d", sum);
}