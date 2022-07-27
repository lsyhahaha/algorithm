#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h" // 加入了bool类型

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};//二叉树


struct Node {
    int val;
    int numChildren;
    struct Node** children;
};// N叉树

int maxDepth(struct Node* root) {
    if (!root) return 0;

    int max_depth = 0;
    int n = root->numChildren;

    for (int i = 0; i < n; i++) {
        max_depth = fmax(max_depth, maxDepth(root->children[i]));
    }

    return max_depth + 1;
}