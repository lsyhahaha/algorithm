//
// Created by 98708 on 2022/7/23.
//

//计算数组的连续子集中元素的和，将和最大的数组输出
#include "bits/stdc++.h"
using namespace std;

int main(){
    const int n = 10;
    int a[n] = {7,1,2,3,-5,6,4,-8,0,2};
    int dp[n];// dp数组
    memset(dp, 0, sizeof(dp));// 数组元素初始化为0
    int Max=0; // 最大值
    int head=0, tail=0; // 连续子集的首尾位置
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            dp[0] = a[i];
            head = i;
        }
        if (dp[i-1] < 0) {
            dp[i] = a[i];
            head = i;
        }else if (dp[i-1] > 0) {
            // 以第i个元素结尾的子集中，和最大为dp[i-1] + a[i]
            dp[i] = dp[i-1]+a[i];
        }
        if (dp[i] > Max){
            Max=dp[i];
            tail = i;
        }
    }
    printf("起始于%d, 结束于%d, 元素个数为%d, 和最大为%d\n", head, tail, tail-head+1, dp[tail]);
    for (int i = head; i <= tail; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}