//
// Created by 98708 on 2022/9/24.
//

/*�����һ���㷨�ж϶�����T�Ƿ�Ϊһ����ȫ�����������Ƿ���1�����򷵻�0.*/

/*�㷨˼�룺
 * �� �����������������������Ҷ�ӽ�����ֻ�����ӵĽ��ʱ����������н�㶼ΪҶ�ӽ�㣬��������ȫ������*/

/*���õ��㷨˼���ǣ����ս��Ҳ������У��жϿս��֮���Ƿ��пս��*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//����������Ĵ洢�ṹ
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

int IsComBtree(Tree root){
    Tree queue[N];
    int front=0,rear=0; // ��ʼ����ͷ��β
    queue[rear++] = root;//���ڵ����
    bool flag = false; // ����Ƿ�������һ��Ҷ�ӽ�����ֻ���������Ľ��
    while(front!=rear){
        int d = rear-front;
        for(int i = 0; i < d; i++){
            Tree cur = queue[front++];// ����
            if(cur->left!=NULL) queue[rear++] = cur->left; // ���Ӵ��ڣ����
            if(cur->right!=NULL) queue[rear++] = cur->right; // �Һ��Ӵ��ڣ����
            // �Ƿ�������һ��Ҷ�ӽ�����ֻ���������Ľ��
            if (cur->left!=NULL && cur->right==NULL) flag = true;
            if (cur->left==NULL && cur->right==NULL) flag = true;

            if(flag && (cur->left!=NULL || cur->right!=NULL)){
                return 0;
            }
        }
    }

    return 1;
}