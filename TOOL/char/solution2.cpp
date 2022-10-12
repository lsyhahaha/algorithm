//
// Created by 98708 on 2022/10/3.
//

/*32题*/

#include "bits/stdc++.h"
using namespace std;

typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}*Tree;

Tree build(string qx, string zx){// 前序中序构建二叉树
    if (qx.size() == 0) return NULL;
    TreeNode *root = (TreeNode*) malloc(sizeof (TreeNode));
    root->val = qx[0]-'0';

    int pos = zx.find(qx[0]);
    root->left = build(qx.substr(1, pos), zx.substr(0,pos));
    root->right = build(qx.substr(pos+1), zx.substr(pos+1));

    return root;
}

class Solution {
public:
    int ans = INT_MAX;
    int pre=INT_MAX;
    int minDiffInBST(TreeNode* root) {
        // 前一个访问结点的值
        // 前序遍历
        if(root->left)
            minDiffInBST(root->left);
        // root
        ans = min(ans, root->val-pre);
        pre = root->val;
        if(root->right)
            minDiffInBST(root->right);
        return ans;
    }
};


int main(){
    TreeNode *root = build("1245367", "4251637");
    Solution a = Solution();
    a.minDiffInBST(root);

    return 0;
}
