//
// Created by 98708 on 2022/7/23.
//

//计算数组的最大连续子集的元素个数

#include "bits/stdc++.h"
using namespace std;
#define MaxSize 10
#define _CRT_SECURE

int main(){
    int a[11] = {7,1,2,3,-25,6,4,8,0,9};
    int dp[MaxSize];
    memset(dp, 0, sizeof(dp));
    int head = 0, tail = 0, MAX = 0, ans = 0;
    for (int i=0; i<MaxSize;i++){
        if (i == 0) {
            head = i;
            dp[i] = a[i];
            MAX = dp[i];
        }
        if (dp[i-1] > 0) {
            dp[i] = a[i] + dp[i-1];
        }else{
            dp[i] = a[i];
            head = i;
        }

        if (dp[i] > MAX){
            tail = i;
            ans = i - head + 1;
        }
    }
    printf("起始于%d, 结束于%d, 元素个数为%d", head, tail, tail-head+1);
    return 0;
}