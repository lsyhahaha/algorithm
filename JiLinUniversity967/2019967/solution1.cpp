//
// Created by 98708 on 2022/9/25.
//

/*��ͷ����˫��ѭ������L��a1,a2,��,an��ת��ΪL2(a1,a3,��,an,��,a4,a2)��*/

/*�㷨˼�룺
 * ��β�巨����˫����
 * ��*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{ // ˫����Ĵ洢�ṹ
    int data;
    struct Node *lLink, *rLink; // ��������
}Node, *LNode;
