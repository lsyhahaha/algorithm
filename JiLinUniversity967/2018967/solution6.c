//
// Created by 98708 on 2022/9/20.
//

/*���G=(V,E)��һ����ͨͼ����֪ͼ����������i��j�������һ���㷨��������i��j�����м�·��
 * */

/*�㷨˼�룺
 * �ٲ��û��ݵ�������������㷨����ʼ���������result,·������Ϊsize,ÿ��·���ı�������������column�У�
 * ��ʼ���������visited;
 * �ڽ���ǰ�������·�����жϵ�ǰ���ʵĶ����Ƿ�Ϊ����v�����ǣ��򽫵�ǰ·������������result�У������ǣ���Ե�ǰ�ڵ�ı߱���л��ݵ������������
 * ��ִ��DFS�Ĺ����У���visited���±��ΪΪ���ʣ�����Ѱ������·����
 * �����result�����е�Ԫ��
 * */

#include "stdlib.h"
#define N 100

// �߱���
typedef struct ArcNode{
    int adjvex;   // �߱�����Ϣ
    int info; // Ȩֵ
    struct ArcNode* next;
}ArcNode;

// �������Ϣ
typedef struct VNode{
    int data;       // �������Ϣ
    struct VNode* firstarc; //�׸��߱�ڵ�
}VNode;

// �ڽӱ���Ϣ
typedef struct{
    VNode adjlist[N]; // �ڽӱ�
    int n, e;           // �������ͱ���
}AGraph;

void dfs(AGraph* g, int u, int v, int** result, int* size, int** num, int** path, int* visited, int index);

int** FindAllPath(AGraph* g, int u, int v, int* size, int** num){
    // ����˵�����ҵ�����i��j�����м�·��
    // ����˵���� �ڽӱ�g, ���u, Ŀ����v, ·�������� size, num
    int** result = (int**) malloc(sizeof(int*)*N); //�������
    *num = (int*) malloc(sizeof(int)*N); // �������ÿһ�еĴ�С
    int visited[g->n], path[N]; //��ʼ�����������Լ�·������
    for(int i = 0;i < g->n; i++){
        visited[i] = 0;
    }
    *size = 0;
    visited[u] = 1;
    dfs(g, u,v, result,size,num,path,visited,0);

    return result;
}

void dfs(AGraph* g, int u, int v, int** result, int* size, int** num, int** path, int* visited, int index){
    path[index] = u; // ����·����Path��
    if(u==v){
        result[*size] = (int*) malloc(sizeof(int)*index + 1); // ������·��
        (*num)[*size] = index+1;                // ��·���Ŀռ�
        for(int i = 0; i <= index; i++){

        }
    }
}