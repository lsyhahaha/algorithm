//
// Created by 98708 on 2022/9/26.
//

/*�������л�����ָ����������һ������ָ��ָ���������е�ĳ����㣨ͨ������������һ������ָ�����ǿյģ���
 * �Ա�д�㷨�жϵ������Ƿ���ڻ���
 * 1�������㷨�Ļ���˼�룻
 * 2���������˼�룬����c/c++���������㷨���ؼ�֮������ע�ͣ�
 * 3��˵��������Ƶ�ʱ�临�ӶȺͿռ临�Ӷȣ�*/

#include "bits/stdc++.h"
using namespace std;
#define ElemType int
#define MaxSize 50

// ���嵥����������
typedef struct LNode{
    ElemType data; //   ������
    struct LNode *next; // ָ����
}LNode, *LinkList;