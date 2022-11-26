//
// Created by 98708 on 2022/11/26.
//

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

//图的存储结构：邻接矩阵法、邻接表法、十字链表（有向图）、邻接多重表（无向图）

// 邻接矩阵法
#define MaxVertNum 100  // 定点数目的最大值
typedef char VertexType; // 定点的数据类型
typedef int EdgrType; // 带权图中边上权值的数据类型
typedef struct {
    VertexType Vex[MaxVertNum]; //顶点表
    EdgrType Edge[MaxVertNum][MaxVertNum]; // 邻接矩阵，边表
    int vexnum, arcnum;         // 图的当前顶点数和弧数
}MGraph;

// 邻接表法
#define MaxVertNum 100  // 图中定点数目的最大值
typedef struct ArcNode{ // 边表结点
    int adjvex;         // 该弧所指向的顶点的位置
    struct ArcNode *next; // 指向下一个结点
    // InfoType info;   // 网的边权值
}ArcNode;

typedef struct VNode{   // 顶点表结点
    VertexType data;  // 顶点信息
    ArcNode *first;   // 指向第一条依附该顶点的弧的指针
}VNode, AdjList[MaxVertNum];

typedef struct{
    AdjList vertices;  // 邻接表
    int vexnum, arcnum; // 图的顶点数与弧数
}ALGraph;