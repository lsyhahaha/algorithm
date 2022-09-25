//
// Created by 98708 on 2022/9/22.
//

/*A��B�ǳ���Ϊn���������顣���һ���㷨�����㷨�������Ϊn������C��
 * Ҫ��1������C�е�ÿһ��Ԫ��C[i]=||{A[j]|A[j]<=B[i],1<=j<=n}||��
 * ����||S||��ʾ����S�е�Ԫ�ظ��������磺�±�����˳���Ϊ4����������A
 * ��B���Լ�����Ҫ�������C��Ҫ��2��������㷨��ʱ�临�Ӷȵ���O(n2)��
*/

/*�㷨˼·��
 * �����Ƚ�A�������������ҵ�A�е�һ������B[i]��Ԫ���±�index����C[i] = index;
 * */

/*�ص㿼�죬ʱ�临�Ӷ�С��O(n2)�������㷨�������Ķ��Ƚϼ򵥣�
 * С��n2�������㷨ֻ�ж����򣬺ϲ�����ϣ�����������úϲ�����
 * �����ҵ�ʱ���ö��ֲ���*/

#include "bits/stdc++.h"
using namespace std;
#define N 10
int A[N] = {6, 9, 10, 17};
int B[N] = {8,2,17,13};
int C[N];
int n = 4;

void sort(int A[]){
    //��A����
}

int count(int A[], int B[], int i, int n){
    int x = B[i];
    int index = 0;
    for(;index<n;index++){
        if(A[index]>x) break;
    }
    return index;
}

void get_C(int A[], int B[], int C[], int n){
    // ��������C
    sort(A);
    for(int i=0;i<n;i++){
        C[i] = count(A,B, i, n);
        printf("%d ", C[i]);
    }
}

int main(){
    get_C(A,B,C,n);
    return 0;
}