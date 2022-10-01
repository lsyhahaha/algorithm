//
// Created by 98708 on 2022/9/29.
//

/*剑指 Offer II 118. 多余的边
 * https://leetcode.cn/problems/7LpjUW/
 * */

/*不知道并查集的基本操作函数是怎么实现的，并查集好像常用于树和图的算法题之中*/

#include "bits/stdc++.h"
#include "stdio.h"
#include "stdlib.h"
#define maxsize 100
using namespace std;

class Solution {
public:
    int findFather(vector<int> father, int node){
        if(father[node] != node){
            father[node] = findFather(father, father[node]);
        }
        return father[node];
    }

    bool Union(vector<int> parent, int node1, int node2){
        // 判断结点1和结点2能不能同时加入并查集中，即
        int fatherOfI = findFather(parent, node1);
        int fatherOfJ = findFather(parent, node2);
        if(fatherOfI!=fatherOfJ){
            parent[fatherOfJ] = fatherOfJ;
            return true;
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        // 首先找到最大的顶点的序号
        int maxVertex = 0;
        for(auto item:edges){
            maxVertex = max(maxVertex, item[0]);
            maxVertex = max(maxVertex, item[1]);
        }
        int n = edges.size();
        vector<int> parent(n+1);
        for(int i = 1; i<=n; i++) parent[i] = i; // 构建并查集

        for(auto item:edges){
            if(Union(parent, item[0], item[1]) == false){
                // 如果该边不能插入并查集中，说明这两个顶点已经在同一个连通图中，所以这条边是多余的
                return item;
            }
        }

        return vector<int> {};
    }
};