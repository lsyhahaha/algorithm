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

// ��������������ĸ��ڵ� root �������е�ǡ�������ڵ��ֵ������ؽ��������ڲ��ı���ṹ�������,�ָ��������
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
            // �������
            /*�����ҵ���Ӧֵ��λ�ã�
             * ��ֵΪx��ֵΪy�Ľ���ֵ������
             * count������Ϊ0ʱ����ʾ������ɣ��ݹ������*/
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
        // �ָ�����������
        vector<int> nums;
        inorder(root, nums); // ����һ��һλ���飬��������������������б�����������
        pair<int,int> swapped= findTwoSwapped(nums); // �ҵ��ǵ������ֵ�λ��
        recover(root, 2, swapped.first, swapped.second); // �ָ�������
    }
};