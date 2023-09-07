//
// Created by 98708 on 2022/9/25.
//

/*以实数形式打印前20项，第一项为2/1，从第二项开始每一项的分子为前一项分子和分母之和，分母为前一项的分子*/

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