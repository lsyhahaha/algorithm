//
// Created by 98708 on 2022/11/26.
// 三种递归遍历
// 四种非递归遍历（先中后+层序）
//

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

typedef struct Node{
    int data;
    struct Node *left, *right;
}Tree, *Bitree;

//先序遍历preOrder(Bitree T)
void preOrder(Bitree T){
    // visit(T);
    preOrder(T->left);
    preOrder(T->right);
}

// 中序后序的递归算法类似

// 先序遍历的非递归算法
void Not_R_preOrder(Bitree T){
    /*①p指向树的根，初始化一个栈，进入循环前栈为空；
     *②如果p不为空或者栈不为空，则执行③④；
     *③如果p不为空，则将p入栈，p向左走；
     *④如果p为空，则出栈，p指向这个元素的右边*/
    Bitree stack[maxsize];    // 辅助栈
    int top = -1;             // 栈顶指针
    Bitree p = T;

    while(top!=-1 || p!= nullptr){
        if(p!= nullptr){  // 如果p为空，访问栈顶元素
            stack[++top] = p;//入栈
            //visit(stack[top]);    // 读取栈顶元素
            p = p->left;
        }else{ // 如果p为空
            p = stack[top--]->right; // p指向栈顶元素的右边
        }//if
    }//while
}

// 中序遍历的非递归算法
void Not_R_InOrder(Bitree T){
    Bitree stack[maxsize];
    int top = -1;
    Bitree p = T;

    while(p!= nullptr || top!=-1){
        if(p!= nullptr){
            //入栈
            stack[++top] = p;
            p = p->left;
        }else{
            //出栈
            //visit(stack[top]);    // 读取栈顶元素
            p = stack[top--]->right; // 出栈，p指向这个元素的右孩子
        }
    }
}

// 后序遍历的非递归代码
void Not_R_postOrder(Bitree T){
    /*①初始化一个辅助栈，进入循环之前为空，初始化两个辅助指针p,r(p指向根，r只想nullptr)
     * ②如果p不为空或者栈不为空，则进入③④
     * ③如果p不为空：则入栈，p向左走（和中序的一模一样，前序在这里就已经访问了）
     * ④如果p为空，就说明左边已经全部在栈里面了，就向右走：
     *        首先读取栈顶节点，让p指向这个节点
     *        if这个节点的右孩子存在，且右孩子没有被访问过，则向右转，即让p等于这个右孩子
     *        if右孩子不存在或者右孩子已经访问过了，则将节点弹出，访问该节点，用r记录最近访问过的节点。访问完节点之后，重置p指针*/
    Bitree stack[maxsize];
    int top=-1;
    Bitree p=T, r= nullptr;
    while(p||top!=-1){
        if(p){
            //入栈
            stack[++top] = p;
            p=p->left;
        }else{
            p = stack[top]; // 读取栈顶元素
            if(p->right && r!=p->right){ // 根据左右根的顺序，如果右孩子被访问了，则一定是最近一次被访问的
                p=p->right;
            }else{
                //visit(p);
                r = stack[top--];//出栈 并用r记录最近访问的节点
                p = nullptr;
            }
        }
    }
}

//层序遍历
void levelOrder(Bitree T){
    Bitree queue[maxsize], p;
    int front=0, rear=0;
    queue[rear++] = T;
    while(rear-front!=0){
        int k = rear-front;
        for(int i=0; i<k; i++){
            p = queue[front++]; // 出队
            // visit(p);
            if(p->left) queue[rear++] = p->left;    // 入队
            if(p->right) queue[rear++] = p->right;  // 入队
        }
    }
}