//
// Created by 98708 on 2022/9/25.
//

/*��ʵ����ʽ��ӡǰ20���һ��Ϊ2/1���ӵڶ��ʼÿһ��ķ���Ϊǰһ����Ӻͷ�ĸ֮�ͣ���ĸΪǰһ��ķ���*/

#include<stdio.h>

int main()
{
    int fz=2;
    int fm=1;
    int t;
    int n=20;
    while(n--)
    {
        printf("%d/%d ",fz,fm);
        t=fz+fm;
        fm=fz;
        fz=t;
    }
    return 0;
}