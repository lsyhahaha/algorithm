//
// Created by 98708 on 2022/9/24.
//

/*2.ͳ�ƶ����������ж���Ҷ��㣨����Ҷ��������ֵܽ�㣩����Ŀ��
 * Ҫ�󣺱�д����LeafNoBrotherInEachLevel(root),����root
 * Ϊָ��ĳ������������ָ�룬�ú����Ĺ����������rootΪ���Ķ�
 * ���������ж���Ҷ������Ŀ��*/

/*�㷨˼�룺
 * �ٲ�α������������жϵ�ǰ���ÿһ������Ƿ�����������
 * ���ж��Ƿ���Ҷ�ڵ㣺��û�����Ӻ��к��ӣ�
 * ���ж��Ƿ����ֵܽڵ㣺*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//����������Ĵ洢�ṹ
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

void level(Tree root, int count[]){
    /*����rootΪ�����������в�α�������ÿ�㣨������ڵ����ڲ�Ϊ��0�㣩����Ҷ��㱣����������*/
    if(root->left==NULL && root->right==NULL){ // ���rootΪ����Ҷ�ڵ�
        count[0] = 1;
        return;
    }
    Tree queue[N];
    int front = 0,rear=0,h=0;
    queue[rear++]=root; // ���ڵ����
    while(front!=rear){//������в�Ϊ��
        int len_cur = rear-front; // �ò�Ľ�����
        for(int i=front; i<len_cur;i++){
            Tree cur = queue[front++];  // ����
            if(cur->left==NULL && cur->right!=NULL && cur->right->left==NULL && cur->right->right==NULL){
                // ��ýڵ���Һ���Ϊ����Ҷ�ڵ㣬��һ�������ֵ��1
                count[h+1]++;
            }
            if(cur->left!=NULL && cur->right==NULL && cur->left->left==NULL && cur->left->right==NULL){
                // ��ýڵ���Һ���Ϊ����Ҷ�ڵ㣬��һ�������ֵ��1
                count[h+1]++;
            }
            if(cur->left!=NULL) queue[rear++] = cur->left;
            if(cur->right!=NULL) queue[rear++] = cur->left;
        }
        h++; //������һ��
    }
}