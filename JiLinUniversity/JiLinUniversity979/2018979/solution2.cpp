//
// Created by 98708 on 2022/9/22.
//

/*p76(第一题太简单，略过)
 * 给定二叉树的根指针为root,编写算法对该二叉树进行自下而上，自左而右的层次遍历。
 * */

/*算法思路：
 * ①自下而上，自左而右的遍历，可以用自上而下，自右而左的层次遍历结果放在一个栈里，最后将出栈
 * 访问，得到的顺序就是自下而上，自左而右的层次遍历了。这里需要两个栈，将每一层的层次遍历结果
 * 存放在一个栈里，然后出栈可以得到每一层的自右而左的层次遍历结果，出栈结果放在另一个存放总体
 * 元素的栈里，对每一层重复操作。最后将总栈元素出栈，即得到自下而上，自右而左的结果。总的来说
 * ，一个队列进行普通的层次遍历，一个栈存放每一层的结果，一个栈存放的结果，最后输出总栈。* */

#include<bits/stdc++.h>
using namespace std;
#define N 20
#define maxsize 20

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

/*核心代码*/
void levelOrder(Tree head){
    Tree queue[N], levelstack[N],stack[N], pre, cur; // levelstack,每一层需要使用的栈，stack存所有元素需要的栈
    int front,rear=0;// 队头队尾
    int leveltop = -1, top=-1; // 栈顶指针
    queue[rear++]=head; //根节点入队
    while(front!=rear){
        int count = rear-front;
        while(count--){        // rear 已知在变，不能用front==raer作为判断条件
            pre=queue[front++];//出队
            levelstack[++leveltop] = pre;//入栈 levelstack
            if (pre->left != NULL){
                queue[rear++] = pre->left;
            }
            if (pre->right != NULL){
                queue[rear++] = pre->right;
            }
        }

        while(leveltop!=-1){//该层栈不为空
            cur = levelstack[leveltop--];
            stack[++top]= cur;// 出栈进入总栈
        }

    }

    while(top!=-1){
        printf("%d", stack[top--]->data);
    }
}

/*测试*/
Tree Create(string pre, string mid){
    //先序遍历和中序遍历构造一棵二叉树
    // 参数说明：pre，mid,分别为二叉树的先序和中序序列
    /*思路：
     * 分别求得根节点的左子树和右子树的先序遍历序列与中序遍历序列；
     * 分别以左子树和右子树为新树进行第一步操作；
     * 直至没有子树为止*/
    if (pre.size() == 0) return NULL; /*递归终止条件*/
    Tree root = (Tree)malloc(sizeof(Node));
    root->data = pre[0] - '0';
    /*所以左子树的先序和后序遍历序列分别为  pre[1...index] mid[0...(index-1)]
     * 右子树的先序和后序遍历序列分别为    pre[(index+1)....n-1] mid[index.....n-1]*/
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