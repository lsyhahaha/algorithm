//
// Created by 98708 on 2022/9/22.
//

/*3.�ٶ�������һά����L[1:n]��R[1:n]��Ϊ��n���ڵ�������Ĵ洢�ṹ��L[i]��R[i]�ֱ�ָ
 * ʾ�ڵ�i������Ӻ��Ҷ��ӣ�0��ʾ�ա���дһ���㷨�жϽڵ�u�Ƿ�Ϊ�ڵ�v�����*/

/*�㷨˼·��
 * �ٴӽ��v��ʼ���ݹ�����ж�v�Ƿ������������У�
 * ��ֱ������������Ϊ��*/

#include "bits/stdc++.h"

bool IsHave(int L[], int R[], int u, int v) {
    if (L[v] == 0 && R[v] == 0) return false; // �������������Ϊ�գ���u����v������
    if (u == v) return true; // u��v������

    if (L[v] == 0) {//���������Ϊ�գ����ж��Ƿ�����������
        return IsHave(L, R, u, R[v]);
    }
    if (R[v] == 0) {//ͬ���ж��Ƿ�����������
        return IsHave(L, R, u, L[v]);
    }
    // �������������ڣ��򷵻�IsHave(������) || IsHave
    return IsHave(L, R, u, R[v]) || IsHave(L, R, u, L[v]);
}