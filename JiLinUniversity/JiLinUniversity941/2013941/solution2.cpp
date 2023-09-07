//
// Created by 98708 on 2022/9/29.
//

/*2.�����������н��ṹ������3���򹹳ɡ�
 * key:�������������ֵ֮��
 * left:�������������ӽ���ַ��
 * right:�������������ӽ���ַ��
 * ��key��Ϊ��������
 * �ö�����������ַΪroot��
 * (1)��д�㷨���ҳ��ö������ȸ����е����һ����㣬Ҫ��ʹ�õݹ飬��ʹ��ջ��
 * (2)��д�㷨����key��ֵ֮���ڵ��ڸ���ֵx�Ľ��ȫ��ɾ����
*/

/*�㷨˼·��
 * ��ѭ������p����ʼʱָ����ڵ㣻
 * �ڴӸ��ڵ㿪ʼѭ������������е�ǰ������к��ӣ���pָ���Һ��ӣ�������һ��ѭ����
 * �����ֻ�����ӣ���pָ�����ӣ�������һ��ѭ����
 * �������û�����ӣ���û���Һ��ӣ���pΪ��ǰ��㣬�˳�ѭ��*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    int data;
    struct Node *left, *right;
}Node, *Tree;

/*(1)��д�㷨���ҳ��ö������ȸ����е����һ����㣬Ҫ��ʹ�õݹ飬��ʹ��ջ��*/
Tree preOrder(Tree root){
    if(root==NULL) return NULL;
    Tree p;
    while(true){
        if(root->right){
            p = root->right;
            continue;
        }
        if(root->left){
            p = p->left;
            continue;
        }
        if(root->right==NULL && root->left==NULL) {
            break;
        }
    }
    return p;
}

/*(2)��д�㷨����key��ֵ֮���ڵ��ڸ���ֵx�Ľ��ȫ��ɾ����*/
//void delNode(Tree root, int x){
//    if(root->data >= x) { // ������ڵ��ֵ���ڵ���x
//        root = root->left;
//        return;
//    }
//    if(root->right->data == x) root->right = root->right->left;
//
//    delNode(root->left, x);  // ����������ɾ�����ڵ���x��ȫ���ڵ�
//    delNode(root->right, x);  // ����������ɾ�����ڵ���x��ȫ���ڵ�
//}