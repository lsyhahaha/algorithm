//
// Created by 98708 on 2022/10/3.
//

/*109��*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;


struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        // �������������������ת��Ϊƽ�������
        // �㷨˼·��
        // ��ƽ�������������Ϊ�����������߶Ȳ����1�� ������������Ϊƽ�������
        // ����ҵ����ڵ㣿{�ҵ����ڵ�֮�󣬿���ֱ���õݹ��㷨}
        if(head == nullptr) return nullptr;

        ListNode* cur=head;
        ListNode* tail=head;
        ListNode* p, *q;
        TreeNode* root;
        // ����ҵ����ʵ�cur?
        int n = 0;
        while(tail->next != nullptr){
            n++;
            tail=tail->next;
        }
        int i = 0;
        // �۰�
        while(i < n/2){
            cur = cur->next;
            i++;
        }
        p = head;
        root->val = cur->next->val;
        q = cur->next->next;
        cur->next=nullptr;
        root->left = sortedListToBST(p);
        root->right = sortedListToBST(q);

        return root;
    }
};