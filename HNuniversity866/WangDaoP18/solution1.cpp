//
// Created by 98708 on 2023/9/5.
//

//��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�������ɺ������ر�ɾ��Ԫ�ص�ֵ��
//�ճ���λ�������һ��Ԫ�������˳���Ϊ�գ��򷴻ش�����Ϣ���˳�

#include "iostream"
#define MaxSize 50
using namespace std;

typedef struct {
    int data[MaxSize];
    int length;
}SqList;

void Del_min(SqList& L, int value){
    //��value��Ϊ����ֵ
    if(L.length == 0){
        cout << "���";
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

    // ��ӡɾ��Ԫ�غ��˳���
    cout << "Updated list: ";
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << " ";
    }
    cout << endl;

    return 0;
}
