#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

long long pre = LONG_MIN;
bool isValidBST(struct TreeNode* root){
    // ����һ���������ĸ��ڵ� root ���ж����Ƿ���һ����Ч�Ķ�����������
    /*�㷨˼·��
     * �������������Ƕ���ÿһ����㣬���������������ֵС�ڸý���ֵ��
     * ��������������Сֵ���ڸýڵ��ֵ*/
    if (root == NULL) {
        return true;
    }
    // ����������
    if (!isValidBST(root->left)) {
        return false;
    }
    // ���ʵ�ǰ�ڵ㣺�����ǰ�ڵ�С�ڵ������������ǰһ���ڵ㣬˵��������BST������ false���������������
    if (root->val <= pre) {
        return false;
    }
    pre = root->val;
    // ����������
    return isValidBST(root->right);
}