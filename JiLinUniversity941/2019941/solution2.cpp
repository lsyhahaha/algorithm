//
// Created by 98708 on 2022/9/25.
//

/*�������ĺ���������д��������A�У�����������д��������B�У����ݺ�����������У�������������*/

/*�㷨˼·��
 * ���������������ң�������������Ҹ�
 * �ڸ��ݺ����������ȷ�����ڵ㣬Ȼ������������������ҵ����ڵ㣬�ֳ���������*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//����������Ĵ洢�ṹ
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

Tree create(int A[], int B[], int length, int start1, int end1, int start2, int end2){
    if(length==0) return NULL;
    // ���ڵ�
    Tree root;
    root->data = B[length-1];
    // �������������ҵ����ڵ��λ��
    int index = start1;
    for(; index < end1; index++){
        if(B[length-1] == A[index]) break;
    }

    root->left = create(A,B,index-start1, start1, index, index+1, end2);
    root->right = create();
}