//
// Created by 98708 on 2022/9/24.
//

/*�����һ���㷨�ж�����ͼG�Ƿ�Ϊһ���������������򷵻�1�����򣬷���0.*/

/*�㷨˼·���ж�һ������ͼ�Ƿ���һ������ֻ��Ҫ�жϸ�ͼ�Ƿ���һ������n���������ͨ
 * ��ͼ�ұ���Ϊn-1,ֻҪ���������������㣬��ô����һ������������ǿ��Բ�����ȱ�����
 * ��ͼ��ͨ����ôֻҪһ����ȱ����Ϳ��Ա��������еĶ��㣬����ֻ��Ҫ����һ��dfs������
 * ��������������¼�ߺͶ������Ŀ���ɡ��ڽӱ��ڴ洢����ͼ��ʱ�� ÿһ���߶��洢�����Σ�
 * ���Լ������еõ��������ߵı���������Ӧ���ڣ�������-1��������
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
    Vnum++; //��������1
    for(int i=0;i<g.n;i++)
        if(g.edges[v][i]==1)
        {
            Enum++;//�߼�1
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
