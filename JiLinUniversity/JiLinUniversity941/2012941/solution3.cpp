//
// Created by 98708 on 2022/9/29.
//

/* ���һ���㷨�����������Ȩ��ͨͼ�о��붥��v�����·������Ϊk�����ж��㣬·�������Ա���Ϊ��λ���㡣*/

/*˼·���õϽ�˹�����㷨���v�ĵ�Դ���·����Ȼ��������·������Ϊk�Ķ��㡣*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

typedef struct graph
{
    int v[maxsize];//�����
    int edge[maxsize][maxsize]; //�ڽӾ��󣬱߱�
    int v_num,e_num;
}Graph;

void Dijkstra(Graph g,int v,int k,int dist[],int path[])
{
    int visited[maxsize];
    int min,i,j,temp;
    for(i=0;i<g.v_num;i++)//��ʼ��
    {
        dist[i]=g.edge[v][i];
        visited[i]=0;
        if(g.edge[v][i]!=0)//��v��·��
            path[i]=v;
        else
            path[i]=-1;  //��vû·��
    }
    visited[v]=1;
    path[v]=-1;
    for(i=0;i<g.v_num-1;i++)
    {
        min=maxsize;
        for(j=0;j<g.v_num;j++)//��δ���뼯�ϵĽ����ѡȡһ����С��
            if(visited[j]==0&&dist[j]<min)
            {
                temp=j;
                min=dist[j];
            }
        visited[temp]=1;//��k���뼯�ϣ�����kΪ�м��㣬�����������
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
            printf("����%d\n",j);
    }
}

