//
// Created by 98708 on 2022/9/24.
//

/*请设计一个算法判断无向图G是否为一棵树，若是树，则返回1；否则，返回0.*/

/*算法思路：判断一个无向图是否是一棵树，只需要判断该图是否是一个包含n个顶点的连通
 * 子图且边数为n-1,只要这两个条件都满足，那么就是一棵树。因此我们可以采用深度遍历，
 * 若图连通，那么只要一次深度遍历就可以遍历出所有的顶点，于是只需要调用一次dfs，并设
 * 置两个计数器记录边和顶点的数目即可。邻接表在存储无向图的时， 每一条边都存储了两次，
 * 所以计数器中得到的是两边的边数即边数应等于（顶点数-1）的两倍
 * */

#include "bits/stdc++.h"
using namespace std;
#define maxsize 100

typedef struct node
{
    int edges[maxsize][maxsize];
    int n,e;
}graph;
int visit[maxsize];

void dfs(graph g,int v,int &Vnum,int &Enum)
{
    visit[v]=1;
    Vnum++; //顶点数加1
    for(int i=0;i<g.n;i++)
        if(g.edges[v][i]==1)
        {
            Enum++;//边加1
            if(visit[i]==0)
                dfs(g,i,Vnum,Enum);
        }
}

bool IsTree(graph g)
{
    int Vnum=0;
    int Enum=0;
    dfs(g,0,Vnum,Enum);
    if(Vnum==g.n&&Enum==2*(Vnum-1))
        return true;
    else
        return false;
}
