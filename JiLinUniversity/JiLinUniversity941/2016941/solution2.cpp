//
// Created by 98708 on 2022/9/24.
//

/*2.一颗以r为根的二叉树可以用以下规则表示成一个由0,1,2组成的字符序列，称之为”二叉树序列S”：
 * S=0，如果r没有子结点;S=1S1，如果r有一个子结点，S1为其子树的二叉树序列S=2S1S2，如果
 * r有两个子结点，S1和S2分别表示其两个子树的二叉树序列。例如，下图所示的二叉树可以用二叉树
 * 序列S=21200110来表示。
 * 对于任意给定的二叉树序列S，试编写非递归算法构造序列S对应的一颗二叉树。
 * */

/*思路：采用非递归前序遍历，每遍历一个就根据S[]的值来创建其子结点，为0就置空,为1创建左孩子，
 * 为2左右孩子都有。每次创建完后，将其入栈，继续遍历。*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

Tree Create(string s){
    if(s.size() == 0) return NULL; // 如果为空序列，则返回空值
    Tree root,cur;
    root->data = s[0];
    int i = 1;
    while (i<s.size()){
        if(s[i]='1'){
            cur =
        }
        i++;
    }
}