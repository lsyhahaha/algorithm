//
// Created by 98708 on 2022/9/29.
//

/* 设计一个算法，求出无向无权连通图中距离顶点v的最短路径长度为k的所有顶点，路径长度以边数为单位计算。*/

/*思路：用迪杰斯特拉算法求出v的单源最短路径，然后查找最短路径长度为k的顶点。*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

typedef struct graph
{
    int v[maxsize];//顶点表
    int edge[maxsize][maxsize]; //邻接矩阵，边表
    int v_num,e_num;
}Graph;

void Dijkstra(Graph g,int v,int k,int dist[],int path[])
{
    int visited[maxsize];
    int min,i,j,temp;
    for(i=0;i<g.v_num;i++)//初始化
    {
        dist[i]=g.edge[v][i];
        visited[i]=0;
        if(g.edge[v][i]!=0)//到v有路径
            path[i]=v;
        else
            path[i]=-1;  //到v没路径
    }
    visited[v]=1;
    path[v]=-1;
    for(i=0;i<g.v_num-1;i++)
    {
        min=maxsize;
        for(j=0;j<g.v_num;j++)//从未并入集合的结点中选取一个最小的
            if(visited[j]==0&&dist[j]<min)
            {
                temp=j;
                min=dist[j];
            }
        visited[temp]=1;//将k加入集合，并以k为中间结点，对其他点更新
        for(j=0;j<g.v_num;j++)
        {
            if(visited[j]==0&&dist[temp]+g.edge[temp][j]<dist[j])
            {
                dist[j]=dist[temp]+g.edge[temp][j];
                path[j]=temp;
            }
        }
    }
    for(j=0;j<g.v_num;j++)
    {
        if(dist[j]==k)
            printf("顶点%d\n",j);
    }
}

