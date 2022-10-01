//
// Created by 98708 on 2022/9/29.
//

/*面试题 04.01. 节点间通路
 * https://leetcode.cn/problems/route-between-nodes-lcci/
 * 节点间通路。给定有向图，设计一个算法，找出两个节点之间是否存在一条路径。*/

/*无官方答案，不写*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

class Solution {
public:
    bool findWhetherExistsPath(int n, vector<vector<int>>& graph, int start, int target) {
        // n为结点数量
        /*算法思路：
         * ①使用bfs判断是否存在从顶点start到顶点target的路径，需要从顶点start开始依次遍历每一层的顶点，判断可以到达的顶点target
         * bfs需要使用哈希表或者数组记录每个顶点的访问状态*/
    }
};