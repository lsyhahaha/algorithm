//
// Created by 98708 on 2022/9/24.
//

/*1.请设计一个算法，将整数数组S[1…n]中所有的偶数放到所有的奇数之前，要求算法时间复杂性为O(n)。
 *
 * 思路：一个指针指向表头，一个指针指向表尾，从前往后找奇数，从后往前找偶数，然后两两交换。反复
 * 执行，直到两指针相遇。*/

#include "bits/stdc++.h"
using namespace std;

void joSort(int A[], int length){
    int i = 0, j = length-1; // 一个指针指向表头，一个指针指向表尾
    while(i<=j){
        while(j>=i && A[j]%2==1){
            // 让指针j指向数组中的偶数
            j--;
        }
        while(i<=j && A[i]%2==0){
            //让指针i指向数组中的奇数
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