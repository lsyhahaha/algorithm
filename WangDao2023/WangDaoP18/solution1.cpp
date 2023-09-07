//
// Created by 98708 on 2023/9/5.
//

//从顺序表中删除具有最小值的元素（假设唯一）并且由函数返回被删除元素的值。
//空出的位置由最后一个元素填补，若顺序表为空，则反回错误信息并退出

#include "iostream"
#define MaxSize 50
using namespace std;

typedef struct {
    int data[MaxSize];
    int length;
}SqList;

void Del_min(SqList& L, int value){
    //用value作为返回值
    if(L.length == 0){
        cout << "表空";
        return;
    }

    value = L.data[0];
    int pos=0;
    for(int i = 0; i < L.length; i++){
        if(L.data[i]<value){
            pos = i;
            value = L.data[i];
        }
    }

    L.data[pos] = L.data[L.length-1];
    L.length--;
}

int main() {
    SqList L;
    L.length = 5;
    L.data[0] = 4;
    L.data[1] = 2;
    L.data[2] = 1;
    L.data[3] = 5;
    L.data[4] = 3;

    int deletedValue;
    Del_min(L, deletedValue);

    cout << "Deleted value: " << deletedValue << endl;
    cout << "Updated length: " << L.length << endl;

    // 打印删除元素后的顺序表
    cout << "Updated list: ";
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << " ";
    }
    cout << endl;

    return 0;
}
