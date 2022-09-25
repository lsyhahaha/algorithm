//
// Created by 98708 on 2022/9/22.
//

/*给定一个长度为n的数组A，已知前m（m<n）个元素按升序有序，后n-m个元素按降序有序，
 * 请编写算法在O(n)时间内对数组A的元素按降序进行排序*/

/*算法思想：
 * ①新开辟一个数组，和两个指针i,j，分别指向第m个和第m+1个，将较大的存放在新数组中
 * ②i,j从中间向两边遍历，直至i==0 , j==n-1*/

#include "bits/stdc++.h"
using namespace std;

/*核心代码*/
void sort_A(int A[], int B[], int m, int n){
    //已知前m（m<n）个元素按升序有序，后n-m个元素按降序有序
    int i = m-1, j = m, k=0;
    while (i>=0 || j<= n-1){//两个指针都滑到最边上，停止循环
        if (i<0){// 只有左指针化到边上时
            B[k++] = A[j++];
            continue;
        }
        if(j>n-1){// 只有右指针化到边上时
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