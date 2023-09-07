//
// Created by 98708 on 2022/9/20.
//

/*设计G=(V,E)是一个连通图。已知图中两个顶点i，j，请设计一个算法给出顶点i到j的所有简单路径
 * */

/*算法思想：
 * ①采用回溯的深度优先搜素算法，初始化结果数组result,路径条数为size,每个路径的边数保存在数组column中，
 * 初始化标记数组visited;
 * ②将当前顶点加入路径，判断当前访问的顶点是否为顶点v，若是，则将当前路径保存在数组result中；若不是，则对当前节点的边表进行回溯的深度优先搜索
 * 在执行DFS的过程中，将visited重新标记为为访问，继续寻找其他路径；
 * ③输出result数组中的元素
 * */

#include "stdlib.h"
#define N 100

// 边表结点
typedef struct ArcNode{
    int adjvex;   // 边表顶点信息
    int info; // 权值
    struct ArcNode* next;
}ArcNode;

// 顶点表信息
typedef struct VNode{
    int data;       // 顶点表信息
    struct VNode* firstarc; //首个边表节点
}VNode;

// 邻接表信息
typedef struct{
    VNode adjlist[N]; // 邻接表
    int n, e;           // 顶点数和边数
}AGraph;

void dfs(AGraph* g, int u, int v, int** result, int* size, int** num, int** path, int* visited, int index);

int** FindAllPath(AGraph* g, int u, int v, int* size, int** num){
    // 函数说明：找到顶点i到j的所有简单路径
    // 参数说明： 邻接表g, 起点u, 目标结点v, 路径的条数 size, num
    int** result = (int**) malloc(sizeof(int*)*N); //结果数组
    *num = (int*) malloc(sizeof(int)*N); // 结果数组每一列的大小
    int visited[g->n], path[N]; //初始化访问数组以及路径数组
    for(int i = 0;i < g->n; i++){
        visited[i] = 0;
    }
    *size = 0;
    visited[u] = 1;
    dfs(g, u,v, result,size,num,path,visited,0);

    return result;
}

void dfs(AGraph* g, int u, int v, int** result, int* size, int** num, int** path, int* visited, int index){
    path[index] = u; // 保存路径到Path中
    if(u==v){
        result[*size] = (int*) malloc(sizeof(int)*index + 1); // 开辟子路径
        (*num)[*size] = index+1;                // 子路径的空间
        for(int i = 0; i <= index; i++){

        }
    }
}