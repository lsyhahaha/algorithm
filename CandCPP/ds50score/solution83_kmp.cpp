//
// Created by 98708 on 2022/11/4.
//

#include "bits/stdc++.h"
#define N 12
using namespace std;

// KMP�㷨
// ʧ�ܺ���
// ����ʧ�ܺ������Ǽ����0��ʼ��������͵�ǰλ��ǰ����ͬ�����ȵ��Ӵ���ȫ��ͬ������Ӵ����±�k���ǵ�ǰ���ʧ�ܺ���ֵ
// ���������ÿ������ֵ
void fail(string P, int f[N]){ /*ʧ�ܺ���*/
    /*F1.[ʧ�ܺ���]*/
    int m = P.size(), i=0;
    f[0] = -1;                      // ��ʼ����һ��λ�õ�ʧ�ܺ���ֵ
    /*F2.[���ɷ�ѭ������]*/
    for(int j=1; j<m; j++){         // �ӵڶ�����ʼ��������������ʧ�ܺ���ֵ
        i = f[j-1];
        while (P[j]!=P[i+1] and i>0)
            i=f[i];
        if(P[j]==P[i+1])
            f[j]=i+1;
        else
            f[j]=-1;
    }
}



int main(){
    string s1 = "ababaaababaa"; // -1 -1 0 1 2 -1 0 1 2 3 4 5
    string s2 = "abcabcb"; // 1 -1 -1 0 1 2 -1
    int f[N];
    fail(s2, f);
    for(int i = 0; i<N;i++){
        cout<<f[i]<<" ";
    }
    return 0;
}