//
// Created by 98708 on 2022/10/31.
//

#include "bits/stdc++.h"
using namespace std;

// �۰��������
void Insertsort(int a[], int n){
    int i,j,mid,low,high;
    for(i=2;i<=n;i++){// ���ν�a[2]~a[n]���뵽ǰ���������������
        a[0]=a[i]; // ��a[i]�ݴ���a[0]��
        low=1,high=i-1;
        while (low<=high){ // ���Ҳ���λ��
            mid=(low+high)/2; // ȡ�м��
            if(a[0]<mid) high=mid-1; // �������ӱ�
            else low=mid+1; // �������ӱ�
        }
        for(j=i-1;j>=high+1;--j){
            a[j+1]=a[j]; // ͳһ����Ԫ�أ��ճ�����λ��
        }
        a[high+1]=a[0];// �������
    }
}

int main(){
    int a[7]={-1,1,3,1,2,3,6}; // ��һλ������������ݣ������ݴ�λ
    Insertsort(a, 6);
    for(int i=1; i<7;i++){
        printf("%d ",a[i]);
    }
    return 0;
}