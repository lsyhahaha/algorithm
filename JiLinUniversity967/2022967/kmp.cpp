//
// Created by 98708 on 2022/10/1.
//

#include "bits/stdc++.h"
using namespace::std;
const int N = 100010;

char* s;
char* p;
int f[N];//��νʧ�ܺ���

void kmp(char* s, char* p){
    f[0] = -1;
    int m = strlen(p);
    //next���鹹����ʧ�ܺ��������Ĵ���
    for (int i = 1, j = -1; p[i]; i++){
        while (j >=0 && p[i] != p[j + 1])
            j = f[j];
        if (p[i] == p[j + 1])
            j++;
        f[i] = j;
    }
    // ���ʧ�ܺ���
    for (int i = 0; p[i]; i++)
        printf("%d ", f[i]);
    printf("\n");
    //ƥ�����
    puts("");
    for (int i = 0, j = -1; s[i]; i++){
        while (j >=0 && s[i] != p[j + 1])
            // ���ʧ�䣬j����ʧ�ܺ����е�ֵ
            j = f[j];
        if (s[i] == p[j + 1])
            // δʧ�䣬iָ���jָ�����
            j++;
        if (j + 1 == m)
            // ƥ��ɹ��ˣ����ģʽ����ƥ�䴮�е�λ�ã�����ĸ��������
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