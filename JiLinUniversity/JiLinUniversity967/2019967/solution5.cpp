//
// Created by 98708 on 2022/9/25.
//

/*���������3��
 * ���һ�������ж�m��n�Ƿ����Ѻõģ����ز������ͣ���m��Լ���͵���n��n��Լ���͵���m��
 * ������Ѻã�Լ���Ͳ��������������Լ��֮�͡�*/

#include<stdio.h>

int ysh(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    int m = 100,n =90;
    if(ysh(m)==n&&ysh(n)==m){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}