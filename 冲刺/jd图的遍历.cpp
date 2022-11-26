//
// Created by 98708 on 2022/11/26.
//

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

//图的遍历分为深度优先搜索和广度优先搜索

// 邻接矩阵法
#define MaxVertNum 100  // 定点数目的最大值
typedef char VertexType; // 定点的数据类型
typedef int EdgrType; // 带权图中边上权值的数据类型
typedef struct {
    VertexType Vex[MaxVertNum]; //顶点表
    EdgrType Edge[MaxVertNum][MaxVertNum]; // 邻接矩阵，边表
    int vexnum, arcnum;         // 图的当前顶点数和弧数
}MGraph;

// dfs
int FirstNeighbor(MGraph G, int v);
int NextNeighbor(MGraph G, int v, int w);

bool visited[MaxVertNum]; // 访问标记数组
void DFS(MGraph G, int v){
    // visit(v);  // 访问顶点v
    visited[v]= true; // 设已访问标记
    for(int w=FirstNeighbor(G,v); w>=0; w=NextNeighbor(G,v,w)){
        if(!visited[w])      // w为v的尚未访问的邻接顶点
            DFS(G,w);
    }//for
}

void DFSTraverse(MGraph G){ // 对图进行深度优先搜索
    for(int v=0;v<G.vexnum;v++)
        visited[v]= false; // 初始化已访问标记数据
    for(int v=0;v<G.vexnum;v++){ // 本代码是从v=0开始遍历
        if(!(visited[v]))
            DFS(G, v);
    }
}

// bfs
// (上面已经写了，所以这里注释掉)
//int FirstNeighbor(MGraph G, int v);
//int NextNeighbor(MGraph G, int v, int w);
//
//bool visited[MaxVertNum]; // 访问标记数组

int queue[maxsize];   // 初始化辅助队列
int front=0, rear=0;  // 队头队尾指针

void BFS(MGraph G, int v){  // 从顶点v出发，广度优先搜索图G
    //visit(v);  //访问初始顶点v
    visited[v]= true; // 对v做访问标记
    queue[rear++] = v;//顶点v入队列queue
    while(rear!=front) { // 如果队列不为空，则进行循环
        v = queue[front++];//顶点v出队
        for(int w= FirstNeighbor(G,v); w>=0; w= NextNeighbor(G,v,w)){ // 检测所有的邻接点
            if(!visited[w]){ // w为v的尚未访问的邻接顶点
                // visit(w);//访问顶点w
                visited[w]= true;  // 对w做已访问标记
                queue[rear++]=w;   //顶点w入队列
            }//if
        }// for
    }
}

void BFSTraverse(MGraph G){ // 对图进行广度优先遍历
    for(int i=0;i<G.vexnum;i++)
        visited[i]= false; // 初始化已访问标记数据
    for(int i=0;i<G.vexnum;i++){ // 从0号顶点开始遍历
        if(!(visited[i]))        // 对每个连通分量调用一次BFS
            BFS(G, i);
    }
}
