//
// Created by 98708 on 2022/9/22.
//

/*3.假定用两个一维数组L[1:n]和R[1:n]作为有n个节点二叉树的存储结构，L[i]和R[i]分别指
 * 示节点i的左儿子和右儿子，0表示空。试写一个算法判断节点u是否为节点v的子孙。*/

/*算法思路：
 * ①从结点v开始，递归查找判断v是否在左右子树中；
 * ②直至左右子树均为空*/

#include "bits/stdc++.h"

bool IsHave(int L[], int R[], int u, int v) {
    if (L[v] == 0 && R[v] == 0) return false; // 如果左右子树都为空，则u不是v的子孙
    if (u == v) return true; // u是v的子孙

    if (L[v] == 0) {//如果左子树为空，则判断是否在右子树中
        return IsHave(L, R, u, R[v]);
    }
    if (R[v] == 0) {//同理，判断是否在左子树中
        return IsHave(L, R, u, L[v]);
    }
    // 左右子树都存在，则返回IsHave(左子树) || IsHave
    return IsHave(L, R, u, R[v]) || IsHave(L, R, u, L[v]);
}