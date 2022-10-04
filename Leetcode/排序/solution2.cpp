//
// Created by 98708 on 2022/10/3.
//

/*快速排序算法的递归和非递归实现*/

/*算法思想：
 * ①通过一趟排序将待排记录分隔成独立的两部分，其中一部分记录的关键字均比另一部分的关键字小
 * 则可分别对这两部分记录继续进行排序，以达到整个序列有序。*/


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

    // 将基准值和最后一个 < v的元素交换，基准值就落在了最终位置
    swap(a, start, end);

    return end;
}

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}