//
// Created by 98708 on 2022/9/26.
//

/*��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ���������ɺ������ر�ɾ��Ԫ�ص�ֵ��
 * �ճ���λ�������һ��Ԫ�������˳���Ϊ�գ�����ʾ������Ϣ���˳���
 **/

/*�㷨˼�룺
 * ���Ƚ��ҵ�˳����У�Ԫ��ֵ��С��Ԫ�ص��±ꣻ
 * �ڱ����Ԫ�ص�ֵ�������һ��Ԫ�ظ��ǣ�����1*/

#include "bits/stdc++.h"
using namespace std;
#define ElemType int
#define MaxSize 50

// ˳���Ĵ�ṹ
typedef struct{
    ElemType data[MaxSize]; // ˳����Ԫ��
    int length;             // ˳���ĵ�ǰ����
}SqList;                    // ˳�������Ͷ���

bool Del_Min(SqList &L, ElemType &value){
    // ɾ��˳���L������Ԫ�ؽ�㣬��ͨ�������Ͳ���value����ֵ
    // ��ɾ���ɹ����򷵻�true�����򷵻�false
    if(L.length == 0){
        printf("˳���Ϊ��"); // ˳���Ϊ�գ����ش�����Ϣ
        return false;
    }
    value=L.data[0];
    int pos = 0;
    for(int i = 0; i < L.length; i++){
        if(L.data[i] < value){    // ��value���䵱ǰ������Сֵ��Ԫ�أ�pos������СֵԪ�ص�λ��
            value = L.data[i];
            pos = i;
        }
    }

    L.data[pos] = L.data[L.length-1];
    L.length--;

    return true;
}