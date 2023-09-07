//
// Created by 98708 on 2022/9/29.
//

/*2.设二叉查找树中结点结构由下述3个域构成。
 * key:给出结点数据项之值；
 * left:给出本结点的左子结点地址；
 * right:给出本结点的右子结点地址。
 * 设key域为正整数。
 * 该二叉树根结点地址为root。
 * (1)编写算法，找出该二叉树先根序列的最后一个结点，要求不使用递归，不使用栈。
 * (2)编写算法，将key域之值大于等于给定值x的结点全部删除。
*/

/*算法思路：
 * ①循环遍历p，开始时指向根节点；
 * ②从根节点开始循环遍历，如果有当前结点有有孩子，则p指向右孩子，进入下一次循环；
 * ②如果只有左孩子，则p指向左孩子，进入下一次循环；
 * ③如果既没有左孩子，又没有右孩子，则p为当前结点，退出循环*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    int data;
    struct Node *left, *right;
}Node, *Tree;

/*(1)编写算法，找出该二叉树先根序列的最后一个结点，要求不使用递归，不使用栈。*/
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

/*(2)编写算法，将key域之值大于等于给定值x的结点全部删除。*/
//void delNode(Tree root, int x){
//    if(root->data >= x) { // 如果根节点的值大于等于x
//        root = root->left;
//        return;
//    }
//    if(root->right->data == x) root->right = root->right->left;
//
//    delNode(root->left, x);  // 在左子树上删除大于等于x的全部节点
//    delNode(root->right, x);  // 在右子树上删除大于等于x的全部节点
//}