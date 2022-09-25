//
// Created by 98708 on 2022/9/22.
//

/*����һ������Ϊn������A����֪ǰm��m<n����Ԫ�ذ��������򣬺�n-m��Ԫ�ذ���������
 * ���д�㷨��O(n)ʱ���ڶ�����A��Ԫ�ذ������������*/

/*�㷨˼�룺
 * ���¿���һ�����飬������ָ��i,j���ֱ�ָ���m���͵�m+1�������ϴ�Ĵ������������
 * ��i,j���м������߱�����ֱ��i==0 , j==n-1*/

#include "bits/stdc++.h"
using namespace std;

/*���Ĵ���*/
void sort_A(int A[], int B[], int m, int n){
    //��֪ǰm��m<n����Ԫ�ذ��������򣬺�n-m��Ԫ�ذ���������
    int i = m-1, j = m, k=0;
    while (i>=0 || j<= n-1){//����ָ�붼��������ϣ�ֹͣѭ��
        if (i<0){// ֻ����ָ�뻯������ʱ
            B[k++] = A[j++];
            continue;
        }
        if(j>n-1){// ֻ����ָ�뻯������ʱ
            B[k++] = B[i--];
            continue;
        }

        if(i>=0 && A[i]>=A[j]){
            B[k++] = A[i];
            i--;
            continue;
        }
        if (j<=n-1 && A[i]<A[j]){
            B[k++] = A[j];
            j++;
            continue;
        }
    }
}

int main(){
    int A[] = {4,5,6,7,8,6,3,1};
    int B[8];
    sort_A(A, B, 5, 8);
    for (int i = 0; i < 8;i++){
        printf("%d ", B[i]);
    }
    return 0;
}