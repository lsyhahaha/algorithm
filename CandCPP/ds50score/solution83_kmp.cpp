//
// Created by 98708 on 2022/11/4.
//

#include "bits/stdc++.h"
#define N 12
using namespace std;

// KMP算法
// 失败函数
// 计算失败函数就是计算从0开始往后遍历和当前位置前遍历同样长度的子串完全相同，最长的子串的下标k就是当前点的失败函数值
// 迭代，求出每个结点的值
void fail(string P, int f[N]){ /*失败函数*/
    /*F1.[失败函数]*/
    int m = P.size(), i=0;
    f[0] = -1;                      // 初始化第一个位置的失败函数值
    /*F2.[归纳法循环计算]*/
    for(int j=1; j<m; j++){         // 从第二个开始依次往后迭代求出失败函数值
        i = f[j-1];
        while (P[j]!=P[i+1] and i>0)
            i=f[i];
        if(P[j]==P[i+1])
            f[j]=i+1;
        else
            f[j]=-1;
    }
}



int main(){
    string s1 = "ababaaababaa"; // -1 -1 0 1 2 -1 0 1 2 3 4 5
    string s2 = "abcabcb"; // 1 -1 -1 0 1 2 -1
    int f[N];
    fail(s2, f);
    for(int i = 0; i<N;i++){
        cout<<f[i]<<" ";
    }
    return 0;
}