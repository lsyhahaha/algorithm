//
// Created by 98708 on 2022/10/31.
//

#include "stdio.h"

//4.c语言将一个正整数分解质因数，例如;输入90，打印出90=2 * 3 * 3 *5；
#include "stdio.h"

void printfac(int x){
    int source = x; //保留正整数的值
    int factors[1000];
    int count = 0;

    for(int i = 2; i<source; i++){
        while(x%i==0){
            x=x/i;
            factors[count++]=i;
        }
    }

    if(x==1){
        printf("%d=", source);
        for(int j = 0; j < count-1; j++){
            printf("%d*", factors[j]);
        }
        printf("%d", factors[count-1]);
    }
}

int main(){
    printfac(120);
    return 0;
}