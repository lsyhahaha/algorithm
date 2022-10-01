//
// Created by 98708 on 2022/9/26.
//

#include "bits/stdc++.h"
using namespace std;
#define ElemType int

// ͼ���ڽӾ���洢�ṹ
#define MaxVertexNum 100 // ������Ŀ�����ֵ
typedef char VertexType; // ���嶥�����������
typedef int EdgeType;    // ��Ȩͼ�б���Ȩֵ����������
typedef struct{
    VertexType Vex[MaxVertexNum];  // �����
    EdgeType Edge[MaxVertexNum][MaxVertexNum]; // �ڽӾ��󣬱߱�
    int vexnum, arcnum;         // ͼ�ĵ�ǰ�ڵ����ͻ���
}Graph;

bool BFS(Graph G, int v);       // BFS��������
void visit(int v);              // ���ʶ���v����������

bool visited[MaxVertexNum];  // ���ʱ������
bool BFSTraverse(Graph G){   // ��ͼG���й�����ȱ���
    for(int i=0; i<G.vexnum;++i){
        visited[i]=false;           // �Է��ʱ��������г�ʼ��
    }
    InitQueue(Q);               // ��ʼ����������Q
    for(int i = 0; i<G.vexnum;++i){
        if(!visited[i]){
            BFS(G,i);               // v[i]Ϊ���ʹ�����v[i]��ʼBFS
        }
    }
}

bool BFS(Graph G, int v){ // �Ӷ���v������������ȱ���ͼG
    visit(v);               // ���ʳ�ʼ���v
    visited[v] = true;      // ��v���ѷ��ʱ��
    Enqueue(Q,v);           // ����v���
    while(!isEmpty(Q)){
        DeQueue(Q,v);        // ����v����
        for(w=FirstNeighhor(G,v); w>=0; w=NextNeighbor(G, v, w)){
            // ���v�������ڽӵ�
            if(!visited[v]){
                // wΪv����δ���ʵ��ڽӶ���
                visited(w); // ���ʶ���w
                visited[w] = true; // ��w���ѷ��ʱ��
                EnQueue(Q,w);     // ����W���
            }
        }
    }
}