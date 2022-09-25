//
// Created by 98708 on 2022/9/21.
//

/*设有字符串s及长度为n的字符型一维数组a，编写一个函数，统计a中每个字符在字符串
 * s中出现的次数，要求该函数以s,a,n为形参，一维整型数组为返回值。
 * 注意：数组作为返回值
 * */

/*算法思想：
 * ①*/

#include "stdio.h"
#include "string.h"

int* CoutChar(char s[], char a[], int n){
//    字符串s,统计a中的每个字符，n为a的长度
    int *ans = new int[n]; // 声明一个长度为n的数组，用于记录结果
    memset(ans, 0, sizeof(int)*n);// 将ans数组中的每个元素初始化为0
    int len = strlen(s); // 获取字符串s的长度len
    for(int i = 0; i < n; i++){
        for (int j = 0; j < len; j++){
            if (a[i] == s[j]){
                ans[i]++;
            }
        }
    }
    return ans;
}


int main()
{
    char str[100];
    char a[4]={'a','b','c'};
    int* ans=NULL;
    while(~scanf("%s",str))
    {
        ans=CoutChar(str,a,3);
        for(int i=0;i<3;i++)
        {
            printf("%c:%d\n",a[i],ans[i]);
        }
    }
    return 0;
}