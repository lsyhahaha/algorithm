//
// Created by 98708 on 2022/9/25.
//

/*从小到大输出前20组孪生素数对。
 * 如(3,5)即为素数对。后者比前者大2且均为素数。
 * (3,5)和(11,13)因为3小于11，故(3,5)素数对小于(11,13)素数对。
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
    while(cnt!=20)  // 20组
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