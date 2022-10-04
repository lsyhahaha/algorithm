//
// Created by 98708 on 2022/10/3.
//

/*冒泡排序算法*/

/*算法思想：
 * ①每次寻找一组数据中最大的元素，两两比较，找到后放到数据的最后一位。
 * ②n个数据第一次两两比较n-1次。第二次比较n-2次，比较的时候如果前一个元素比第二个元素大则相互交换。*/

/*十大排序算法分为比较类排序和非比较类排序：
 * ①比较类排序：交换排序，插入排序，选择排序，归并排序；
 * ②非比较排序：计数排序，桶排序和基数排序
 * */
/*冒泡排序和快速排序属于交换排序*/


#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

void BubbleSort(int a[], int length){
    int temp=0;
    for(int i = 0; i < length; i++){
        // 需要进行n趟排序
        for(int j = i+1; j < length-1; j++){
            // 内层for循环，每次将最大的元素冒泡到最后面
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}