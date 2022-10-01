//
// Created by 98708 on 2022/9/26.
//

#include "bits/stdc++.h"
using namespace std;
#define ElemType int

// 图的邻接矩阵存储结构
#define MaxVertexNum 100 // 顶点数目的最大值
typedef char VertexType; // 定义顶点的数据类型
typedef int EdgeType;    // 带权图中边上权值的数据类型
typedef struct{
    VertexType Vex[MaxVertexNum];  // 顶点表
    EdgeType Edge[MaxVertexNum][MaxVertexNum]; // 邻接矩阵，边表
    int vexnum, arcnum;         // 图的当前节点数和弧数
}Graph;

bool BFS(Graph G, int v);       // BFS函数声明
void visit(int v);              // 访问顶点v，函数声明

bool visited[MaxVertexNum];  // 访问标记数组
bool BFSTraverse(Graph G){   // 对图G进行广度优先遍历
    for(int i=0; i<G.vexnum;++i){
        visited[i]=false;           // 对访问标记数组进行初始化
    }
    InitQueue(Q);               // 初始化辅助队列Q
    for(int i = 0; i<G.vexnum;++i){
        if(!visited[i]){
            BFS(G,i);               // v[i]为访问郭，从v[i]开始BFS
        }
    }
}

bool BFS(Graph G, int v){ // 从顶点v出发，广度优先遍历图G
    visit(v);               // 访问初始结点v
    visited[v] = true;      // 对v做已访问标记
    Enqueue(Q,v);           // 顶点v入队
    while(!isEmpty(Q)){
        DeQueue(Q,v);        // 顶点v出队
        for(w=FirstNeighhor(G,v); w>=0; w=NextNeighbor(G, v, w)){
            // 检测v的所有邻接点
            if(!visited[v]){
                // w为v的尚未访问的邻接顶点
                visited(w); // 访问顶点w
                visited[w] = true; // 对w做已访问标记
                EnQueue(Q,w);     // 顶点W入队
            }
        }
    }
}