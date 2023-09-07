//
// Created by 98708 on 2022/9/22.
//

/*p76(��һ��̫�򵥣��Թ�)
 * �����������ĸ�ָ��Ϊroot,��д�㷨�Ըö������������¶��ϣ�������ҵĲ�α�����
 * */

/*�㷨˼·��
 * �����¶��ϣ�������ҵı��������������϶��£����Ҷ���Ĳ�α����������һ��ջ���󽫳�ջ
 * ���ʣ��õ���˳��������¶��ϣ�������ҵĲ�α����ˡ�������Ҫ����ջ����ÿһ��Ĳ�α������
 * �����һ��ջ�Ȼ���ջ���Եõ�ÿһ������Ҷ���Ĳ�α����������ջ���������һ���������
 * Ԫ�ص�ջ���ÿһ���ظ������������ջԪ�س�ջ�����õ����¶��ϣ����Ҷ���Ľ�����ܵ���˵
 * ��һ�����н�����ͨ�Ĳ�α�����һ��ջ���ÿһ��Ľ����һ��ջ��ŵĽ������������ջ��* */

#include<bits/stdc++.h>
using namespace std;
#define N 20
#define maxsize 20

typedef struct Node{//����������Ĵ洢�ṹ
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

/*���Ĵ���*/
void levelOrder(Tree head){
    Tree queue[N], levelstack[N],stack[N], pre, cur; // levelstack,ÿһ����Ҫʹ�õ�ջ��stack������Ԫ����Ҫ��ջ
    int front,rear=0;// ��ͷ��β
    int leveltop = -1, top=-1; // ջ��ָ��
    queue[rear++]=head; //���ڵ����
    while(front!=rear){
        int count = rear-front;
        while(count--){        // rear ��֪�ڱ䣬������front==raer��Ϊ�ж�����
            pre=queue[front++];//����
            levelstack[++leveltop] = pre;//��ջ levelstack
            if (pre->left != NULL){
                queue[rear++] = pre->left;
            }
            if (pre->right != NULL){
                queue[rear++] = pre->right;
            }
        }

        while(leveltop!=-1){//�ò�ջ��Ϊ��
            cur = levelstack[leveltop--];
            stack[++top]= cur;// ��ջ������ջ
        }

    }

    while(top!=-1){
        printf("%d", stack[top--]->data);
    }
}

/*����*/
Tree Create(string pre, string mid){
    //��������������������һ�ö�����
    // ����˵����pre��mid,�ֱ�Ϊ���������������������
    /*˼·��
     * �ֱ���ø��ڵ�����������������������������������������У�
     * �ֱ�����������������Ϊ�������е�һ��������
     * ֱ��û������Ϊֹ*/
    if (pre.size() == 0) return NULL; /*�ݹ���ֹ����*/
    Tree root = (Tree)malloc(sizeof(Node));
    root->data = pre[0] - '0';
    /*����������������ͺ���������зֱ�Ϊ  pre[1...index] mid[0...(index-1)]
     * ������������ͺ���������зֱ�Ϊ    pre[(index+1)....n-1] mid[index.....n-1]*/
    int pos = mid.find(pre[0]);
    if (pos == -1) return NULL;
    root->left = Create(pre.substr(1,pos), mid.substr(0,pos));
    root->right = Create(pre.substr(pos+1), mid.substr(pos+1));

    return root;
}

int main(){
    Tree root = Create("1245367", "4251637");
    levelOrder(root);

    return 0;
}