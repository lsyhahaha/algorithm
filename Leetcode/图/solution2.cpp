//
// Created by 98708 on 2022/9/29.
//

/*��ָ Offer II 118. ����ı�
 * https://leetcode.cn/problems/7LpjUW/
 * */

/*��֪�����鼯�Ļ���������������ôʵ�ֵģ����鼯������������ͼ���㷨��֮��*/

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
        // �жϽ��1�ͽ��2�ܲ���ͬʱ���벢�鼯�У���
        int fatherOfI = findFather(parent, node1);
        int fatherOfJ = findFather(parent, node2);
        if(fatherOfI!=fatherOfJ){
            parent[fatherOfJ] = fatherOfJ;
            return true;
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        // �����ҵ����Ķ�������
        int maxVertex = 0;
        for(auto item:edges){
            maxVertex = max(maxVertex, item[0]);
            maxVertex = max(maxVertex, item[1]);
        }
        int n = edges.size();
        vector<int> parent(n+1);
        for(int i = 1; i<=n; i++) parent[i] = i; // �������鼯

        for(auto item:edges){
            if(Union(parent, item[0], item[1]) == false){
                // ����ñ߲��ܲ��벢�鼯�У�˵�������������Ѿ���ͬһ����ͨͼ�У������������Ƕ����
                return item;
            }
        }

        return vector<int> {};
    }
};