//
// Created by 98708 on 2022/11/3.
//

//2019软专）从小到大输出前20组孪生素数对，如（3,5）即为素数对，后者比前者大2，且均为素数。
#include "stdio.h"

int isSushu(int x){
    // 素数返回1，否则返回0
    for(int i=2; i<x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int count=1,i=1;
    for(i=1; ;i++){
        if(isSushu(i) && isSushu(i+2)){
            count++;
            printf("(%d, %d)\n", i, i+2);
        }
        if(count==20) break;
    }

    return 0;
}