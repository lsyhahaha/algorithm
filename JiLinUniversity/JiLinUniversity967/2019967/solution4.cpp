//
// Created by 98708 on 2022/9/25.
//

/*��С�������ǰ20�����������ԡ�
 * ��(3,5)��Ϊ�����ԡ����߱�ǰ�ߴ�2�Ҿ�Ϊ������
 * (3,5)��(11,13)��Ϊ3С��11����(3,5)������С��(11,13)�����ԡ�
 * */

#include<stdio.h>

bool isp(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int cnt=0;
    int i=2;
    while(cnt!=20)  // 20��
    {
        if(isp(i)&&isp(i+2))
        {
            printf("(%d,%d)\n",i,i+2);
            cnt++;
        }
        i++;
    }
    return 0;
}