//
// Created by 98708 on 2022/10/3.
//

/*���������㷨�ĵݹ�ͷǵݹ�ʵ��*/

/*�㷨˼�룺
 * ��ͨ��һ�����򽫴��ż�¼�ָ��ɶ����������֣�����һ���ּ�¼�Ĺؼ��־�����һ���ֵĹؼ���С
 * ��ɷֱ���������ּ�¼�������������Դﵽ������������*/


#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

void quickSort(int a[]);
void quickSortInternal(int a[], int start, int end);
int partion(int a[], int start, int end);
void swap(int a[], int i, int j);

void quickSort(int a[], int length){
    int n = length;
    quickSortInternal(a, 0, n-1);
}

void quickSortInternal(int a[], int start, int end){
    if(start>=end) return;

    int pos = partion(a, start, end);
    quickSortInternal(a, start, pos);
    quickSortInternal(a, pos, end);
}

int partion(int a[], int start, int end){
    int value = a[start];
    int j = start;
    for(int i = start+1; i <= end; i++){
        if(a[i]<value){
            swap(a, j+1, i);
        }
    }

    // ����׼ֵ�����һ�� < v��Ԫ�ؽ�������׼ֵ������������λ��
    swap(a, start, end);

    return end;
}

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}