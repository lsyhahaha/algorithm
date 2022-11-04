//
// Created by 98708 on 2022/10/31.
//

//一个数如果恰好等于它的因子之和，这个数就称为“完数”。编写程序找出1000以内所有完数。 6 its factors are 1,2,3。

#include "stdio.h"
#include "math.h"

/*
 * A: 通过小于*/

#include "stdio.h"

void SumfactorsP(int x){
    int factors[1000];  // 用于存放x的因子
    int count = 0; // x的因子个数
    int sum = 0; // x的因子和
    for(int i = 1; i<x; i++){  // 检查i是否为x的因子
        if(x%i==0){
            factors[count++]=i;
            sum+=i;
        }
    }

    if(sum==x){
//        printf("x=%d\n", x);
        printf("%d its factors are ", x);
        for(int j=0; j<count-1; j++){
            printf("%d,", factors[j]);
            sum+=factors[j];
        }
        printf("%d", factors[count-1]);
        printf("\n");
    }
}
int main(){
    for(int x=1; x<1e3; x++){
        SumfactorsP(x);
    }
    return 0;
}