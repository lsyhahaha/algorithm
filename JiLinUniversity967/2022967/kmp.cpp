//
// Created by 98708 on 2022/10/1.
//

#include "bits/stdc++.h"
using namespace　std;
const int N = 100010;

char* s;
char* p;
int f[N];//所谓失败函数

void kmp(char* s, char* p){
    f[0] = -1;
    int m = strlen(p);
    //next数组构建（失败函数）核心代码
    for (int i = 1, j = -1; p[i]; i++){
        while (j >=0 && p[i] != p[j + 1])
            j = f[j];
        if (p[i] == p[j + 1])
            j++;
        f[i] = j;
    }
    // 输出失败函数
    for (int i = 0; p[i]; i++)
        printf("%d ", f[i]);
    printf("\n");
    //匹配过程
    puts("");
    for (int i = 0, j = -1; s[i]; i++){
        while (j >=0 && s[i] != p[j + 1])
            // 如果失配，j调用失败函数中的值
            j = f[j];
        if (s[i] == p[j + 1])
            // 未失配，i指针和j指针后移
            j++;
        if (j + 1 == m)
            // 匹配成功了，输出模式串在匹配串中的位置（首字母的索引）
            printf("%d ", i-m+1);
    }
}

int main()
{
    s = "sdasfasfjklahjlfdahfjadsababaaababaaajda\0";
    p = "ababaaababaa\0";
    kmp(s, p);
    return 0;
}