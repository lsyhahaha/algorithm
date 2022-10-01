//
// Created by 98708 on 2022/9/29.
//

#include "bits/stdc++.h"
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// 给你二叉搜索树的根节点 root ，该树中的恰好两个节点的值被错误地交换。请在不改变其结构的情况下,恢复这棵树。
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& nums) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left, nums);
        nums.push_back(root->val);
        inorder(root->right, nums);
    }

    pair<int,int> findTwoSwapped(vector<int>& nums) {
        int n = nums.size();
        int index1 = -1, index2 = -1;
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i + 1] < nums[i]) {
                index2 = i + 1;
                if (index1 == -1) {
                    index1 = i;
                } else {
                    break;
                }
            }
        }
        int x = nums[index1], y = nums[index2];
        return {x, y};
    }

    void recover(TreeNode* r, int count, int x, int y) {
        if (r != nullptr) {
            // 先序遍历
            /*首先找到对应值的位置；
             * 将值为x和值为y的结点的值互换；
             * count计数，为0时，表示互换完成，递归结束。*/
            if (r->val == x || r->val == y) {
                r->val = r->val == x ? y : x;
                if (--count == 0) {
                    return;
                }
            }
            recover(r->left, count, x, y);
            recover(r->right, count, x, y);
        }
    }

    void recoverTree(TreeNode* root) {
        // 恢复二叉排序树
        vector<int> nums;
        inorder(root, nums); // 定义一个一位数组，将二叉树的中序遍历序列保存在数组中
        pair<int,int> swapped= findTwoSwapped(nums); // 找到非递增部分的位置
        recover(root, 2, swapped.first, swapped.second); // 恢复二叉树
    }
};