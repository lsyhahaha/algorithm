//
// Created by 98708 on 2022/9/27.
//

/*�߶�ƽ�����������������������ĸ߶�֮�����ֵ������1�Ķ���������֪һ�ö��������ö���������д洢�����
 * �ṹΪ��left,data,right��, rootָ�����㡣��д�㷨�жϸö������Ƿ�Ϊƽ���������*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int high(TreeNode * root){
    if(root==nullptr) return 0;
    return max(high(root->left), high(root->right)) + 1;
}

bool isBalanced(TreeNode* root) {
    if(root == nullptr) return true;
    return isBalanced(root->left) && isBalanced(root->right) && abs(high(root->left) - high(root->right)) <= 1;
}