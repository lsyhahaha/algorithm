//
// Created by 98708 on 2022/9/22.
//

/*设有一个正权有向图G=(V,E),w是G的一个顶点，w的偏心距定义为：max(从u到w的最短路径长度|u∈V)，其中的
 * 路径长度指的是路径上各边权值之和。将G中偏心距最小的顶点称为G的中心，试设计一个函数返回图G的中心。*/

/*算法思想：
 * ①一个点的偏心距就是其余顶点到此顶点的最短路径中最长的一个。
 * ②可用迪杰斯特拉算法求出其余顶点到一个顶点的最短路径，然后得到其偏心距。
 * ③循环求出每个顶点的偏心距，将偏心距最小的顶点返回；
 * */
#include "bits/stdc++.h"
using namespace std;
#define maxsize 100

typedef struct graph
{
    int v[maxsize];//存顶点
    int edges[maxsize][maxsize];//存边
    int n;//顶点数
}Graph;

void Dijkstra(Graph g, int i, int a[maxsize][maxsize]){
    /*迪杰斯特拉算法*/
}

void GetCenter(Graph g){
    int a[maxsize][maxsize];
    for(int i=0; i<g.n; i++){ // 采用迪杰斯特拉算法求出每个顶点的单源最短路径
        Dijkstra(g, i, a);
    }
    int center, centernum=maxsize; // center存储图的中心，centernum存储中心的偏心距
    for(int i =0;i<g.n;i++){
        int max=0;
        for(int j=0;j<g.n;j++)//找一个点i的偏心距
            if(a[j][i]>max)   //a[j][i]表示其他结点到i点的最短路径
                max=a[j][i];
        if(max<centernum)    //更新中心
        {
            centernum=max;
            center=i;
        }
    }
    printf("%d是图的中心，偏心距为%d",center,centernum);
}