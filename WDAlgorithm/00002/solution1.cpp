//
// Created by 98708 on 2022/9/26.
//

/*从顺序表中删除具有最小值的元素（假设唯一），并且由函数返回被删除元素的值。
 * 空出的位子由最后一个元素填补，若顺序表为空，则显示错误信息并退出。
 **/

/*算法思想：
 * ①先将找到顺序表中，元素值最小的元素的下标；
 * ②保存该元素的值，用最后一个元素覆盖，表长减1*/

#include "bits/stdc++.h"
using namespace std;
#define ElemType int
#define MaxSize 50

// 顺序表的存结构
typedef struct{
    ElemType data[MaxSize]; // 顺序表的元素
    int length;             // 顺序表的当前长度
}SqList;                    // 顺序表的类型定义

bool Del_Min(SqList &L, ElemType &value){
    // 删除顺序表L中最先元素结点，并通过引用型参数value返回值
    // 若删除成功，则返回true，否则返回false
    if(L.length == 0){
        printf("顺序表为空"); // 顺序表为空，返回错误信息
        return false;
    }
    value=L.data[0];
    int pos = 0;
    for(int i = 0; i < L.length; i++){
        if(L.data[i] < value){    // 让value记忆当前具有最小值的元素，pos记忆最小值元素的位置
            value = L.data[i];
            pos = i;
        }
    }

    L.data[pos] = L.data[L.length-1];
    L.length--;

    return true;
}