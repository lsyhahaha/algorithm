//
// Created by 98708 on 2022/10/31.
//

#include "stdio.h"

//4.c���Խ�һ���������ֽ�������������;����90����ӡ��90=2 * 3 * 3 *5��
#include "stdio.h"

void printfac(int x){
    int source = x; //������������ֵ
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