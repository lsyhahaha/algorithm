//
// Created by 98708 on 2022/9/22.
//

/*百钱买百鸡
 * 百钱买百鸡问题：鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；百钱买百鸡，则翁、母、雏各几何？*/

/*算法思想：暴力枚举*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int jw,jm,jc;
    for(jw=0;jw<=100;jw++)
        for(jm=0;jm<=100;jm++)
            for(jc=0;jc<=100;jc++)
                if(5*jw+3*jm+jc/3==100&&jc%3==0&&jw+jm+jc==100)
                    printf("鸡翁%d个，鸡母%d个，鸡雏%d个\n",jw,jm,jc);
}

