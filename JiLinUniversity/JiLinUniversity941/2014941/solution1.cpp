//
// Created by 98708 on 2022/9/24.
//

/*1.�����һ���㷨������������S[1��n]�����е�ż���ŵ����е�����֮ǰ��Ҫ���㷨ʱ�临����ΪO(n)��
 *
 * ˼·��һ��ָ��ָ���ͷ��һ��ָ��ָ���β����ǰ�������������Ӻ���ǰ��ż����Ȼ����������������
 * ִ�У�ֱ����ָ��������*/

#include "bits/stdc++.h"
using namespace std;

void joSort(int A[], int length){
    int i = 0, j = length-1; // һ��ָ��ָ���ͷ��һ��ָ��ָ���β
    while(i<=j){
        while(j>=i && A[j]%2==1){
            // ��ָ��jָ�������е�ż��
            j--;
        }
        while(i<=j && A[i]%2==0){
            //��ָ��iָ�������е�����
            i++;
        }
        if(i<j){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
}

int main(){
    int A[8] = {3,21,24,23,23,1,2,4};
    joSort(A, 8);
    for(int i = 0; i<8;i++) printf("%d ", A[i]);
    return 0;
}