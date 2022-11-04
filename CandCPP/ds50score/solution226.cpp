//
// Created by 98708 on 2022/10/31.
//

#include "bits/stdc++.h"
using namespace std;

// 折半插入排序
void Insertsort(int a[], int n){
    int i,j,mid,low,high;
    for(i=2;i<=n;i++){// 依次讲a[2]~a[n]插入到前面已排序的序列中
        a[0]=a[i]; // 将a[i]暂存在a[0]中
        low=1,high=i-1;
        while (low<=high){ // 查找插入位置
            mid=(low+high)/2; // 取中间点
            if(a[0]<mid) high=mid-1; // 查找左子表
            else low=mid+1; // 查找右子表
        }
        for(j=i-1;j>=high+1;--j){
            a[j+1]=a[j]; // 统一后移元素，空出插入位置
        }
        a[high+1]=a[0];// 插入操作
    }
}

int main(){
    int a[7]={-1,1,3,1,2,3,6}; // 第一位不存放排序数据，属于暂存位
    Insertsort(a, 6);
    for(int i=1; i<7;i++){
        printf("%d ",a[i]);
    }
    return 0;
}