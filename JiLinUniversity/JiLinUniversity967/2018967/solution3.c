//
// Created by 98708 on 2022/9/19.
//

//һ������Ϊn�ķǸ�����˫����еġ���Ȩ�͡�
/*
 * �㷨˼·��
 * ��˫����в���˳��洢������������A�У�����ִ��fron��tail�ֱ�ָ���ͷ�ͱ�β��
 * ��sum��¼��Ȩ�ͣ�ÿ�δӶ�ͷ���߶�β��ȡ����С���Ǹ����� ��t��¼Ȩ��
 * */
#include<stdio.h>
#define N 10

int MaxSum(){// ����˫�˶�������Ȩ��
    int A[N] = {1,2,31,23,23,13,31,32,31,31}; // ����ģ��˫�˶���
    int n = 10, t = 1; // �ӳ� n, Ȩ��t
    int front = 0, tail = n-1; //�ֱ�ָ���ͷ�Ͷ�β
    int sum = 0;
    while(front <= tail){
        if (A[front++] <= A[tail]){//�����ͷ��С����Ӷ�ͷȡ��
            sum += A[front] * t++;
        }else if (A[front] <= A[tail--]){
            sum += A[tail] * t++;
        }
    }
    printf("result = %d", sum);
}