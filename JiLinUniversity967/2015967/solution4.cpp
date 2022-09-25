//
// Created by 98708 on 2022/9/24.
//

#include "bits/stdc++.h"
using namespace std;
#define N 100

void f(int s[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        int b[N]; //暂存当前子集元素
        int count=0;
        for(int j=0;j<n;j++)
            if(i&(1<<j))
            {
                b[count++]=s[j];
            }
        if(count==2)
        {
            printf("{%d,%d}\n",b[0],b[1]);
        }
    }
}
int main()
{
    int s[4]={1,2,3,4};
    f(s,4);
}
