//
// Created by 98708 on 2022/9/22.
//

/*p29
 * 1.已知k阶斐波那契数列的定义为:
 * f0=0, f1=0, …, fk-2=0,fk-1=1;
 * fn=fn-1+fn-2+…+fn-k,n=k,k+1,…
 * (1)试编写求k阶斐波那契数列的第m项值的非递归函数F(k,m)
 * (2)计算F(5,8)的值。*/

    /*2018941t1的k阶斐波拉契数列是什么意思，和普通的好像不一样；
     * 哦哦，知道了，普通的斐波拉契数列数列是1 1 2 3 5，每项是前面相邻两项的和；
     * 而k阶斐波拉契数列就是前k项都为0，第k项为1，以后每一项都是前k项的和*/

    /*算法思想：
     * ①先给前k+1项赋值 0 0 0 .... 0 1 1
     * ②后面分每一项都等于前k项之和，等价于2*A[i-1] - A[i-k]
     * */
#include "bits/stdc++.h"
using namespace std;
#define N 100

int F(int k,int m){
    if (m <= k-1) return 0; // 前k项目都为0, m < k则第m项为0
    int A[N] = {0};
    for (int i = 0; i <= k-1; i++){// 前k项目都为0
        A[i] = 0;
    }
    A[k] = 1, A[k+1] = 1; /*需要把k+1也先求出来*/
    for (int i = k+2; i <= N; i++){
        A[i]= 2*A[i-1] - A[i-k];    /*核心公式*/
    }

    return A[m];
}

int main(){
    printf("%d", F(5,8));
    return 0;
}