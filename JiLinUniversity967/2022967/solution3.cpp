//
// Created by 98708 on 2022/10/1.
//

/*编写函数int find(char* s1, char* s2),统计字符串s2在s1中出现的次数，其中字符串以“\0”结尾；*/

/*算法思想：
 * KMP算法*/

#include "bits/stdc++.h"
using namespace::std;
const int N = 100010;

char* s;
char* p;
int f[N];//所谓失败函数

void kmp(char* s, char* p){
    int count=0; //用于记录出现次数
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
        printf("%d\t", f[i]);

    //匹配过程
    puts("");
    for (int i = 0, j = -1; s[i]; i++){
        while (j >=0 && s[i] != p[j + 1])
            // 如果失配，j调用失败函数中的值
            j = f[j];
        if (s[i] == p[j + 1])
            // 未失配，i指针和j指针后移
            j++;
        if (j + 1 == m){
            // 匹配成功了，输出模式串在匹配串中的位置（首字母的索引）
            printf("%d\t", i-m+1);
            count++;
            j = -1; // 重置j
        }
    }
    printf("\n");
    printf("出现%d次", count);
}

int main()
{
    s = "abcabdsbc\0";
    p = "bc\0";
    kmp(s, p);
    return 0;
}