//
// Created by 98708 on 2022/9/20.
//

// 编写程序输入任意一个正整数n, n = d[1,2...m], 输出由d[1,2,...m]组成最大的数
/*
 * 算法思想：
 * ①将n的各个数位放入数组中；
 * ②对数组进行从小到大排序；
 * ③从后往前计算得到最大值
*/

#include<stdio.h>
#define N 100

void Sort(int A[], int n){
    // 对数组[0..n]排序
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
    int n, sum;              // sum为计算后的数字
    n = 123456789;
//    scanf("%d", &n); // 输入任意一个正整数n
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