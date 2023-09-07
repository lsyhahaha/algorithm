//
// Created by 98708 on 2022/9/22.
//

/*A和B是长度为n的两个数组。设计一个算法，该算法输出长度为n的数组C。
 * 要求1：数组C中的每一个元素C[i]=||{A[j]|A[j]<=B[i],1<=j<=n}||，
 * 其中||S||表示集合S中的元素个数。例如：下表给出了长度为4的两个数组A
 * 和B，以及满足要求的数组C；要求2：所设计算法的时间复杂度低于O(n2)。
*/

/*算法思路：
 * ①首先将A按照升序排序；找到A中第一个大于B[i]的元素下标index，则C[i] = index;
 * */

/*重点考察，时间复杂度小于O(n2)的排序算法，其他的都比较简单；
 * 小于n2的排序算法只有堆排序，合并排序，希尔排序。这里用合并排序；
 * 最后查找的时候用二分查找*/

#include "bits/stdc++.h"
using namespace std;
#define N 10
int A[N] = {6, 9, 10, 17};
int B[N] = {8,2,17,13};
int C[N];
int n = 4;

void sort(int A[]){
    //对A排序
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
    // 计算数组C
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