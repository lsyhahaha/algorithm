//
// Created by 98708 on 2022/11/3.
//

//2019��ר����С�������ǰ20�����������ԣ��磨3,5����Ϊ�����ԣ����߱�ǰ�ߴ�2���Ҿ�Ϊ������
#include "stdio.h"

int isSushu(int x){
    // ��������1�����򷵻�0
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