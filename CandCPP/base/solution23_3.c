//
// Created by 98708 on 2022/10/31.
//

//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ������������д�����ҳ�1000�������������� 6 its factors are 1,2,3��

#include "stdio.h"
#include "math.h"

/*
 * A: ͨ��С��*/

#include "stdio.h"

void SumfactorsP(int x){
    int factors[1000];  // ���ڴ��x������
    int count = 0; // x�����Ӹ���
    int sum = 0; // x�����Ӻ�
    for(int i = 1; i<x; i++){  // ���i�Ƿ�Ϊx������
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