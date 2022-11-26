//
// Created by 98708 on 2022/11/26.
//

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

//ͼ�ı�����Ϊ������������͹����������

// �ڽӾ���
#define MaxVertNum 100  // ������Ŀ�����ֵ
typedef char VertexType; // �������������
typedef int EdgrType; // ��Ȩͼ�б���Ȩֵ����������
typedef struct {
    VertexType Vex[MaxVertNum]; //�����
    EdgrType Edge[MaxVertNum][MaxVertNum]; // �ڽӾ��󣬱߱�
    int vexnum, arcnum;         // ͼ�ĵ�ǰ�������ͻ���
}MGraph;

// dfs
int FirstNeighbor(MGraph G, int v);
int NextNeighbor(MGraph G, int v, int w);

bool visited[MaxVertNum]; // ���ʱ������
void DFS(MGraph G, int v){
    // visit(v);  // ���ʶ���v
    visited[v]= true; // ���ѷ��ʱ��
    for(int w=FirstNeighbor(G,v); w>=0; w=NextNeighbor(G,v,w)){
        if(!visited[w])      // wΪv����δ���ʵ��ڽӶ���
            DFS(G,w);
    }//for
}

void DFSTraverse(MGraph G){ // ��ͼ���������������
    for(int v=0;v<G.vexnum;v++)
        visited[v]= false; // ��ʼ���ѷ��ʱ������
    for(int v=0;v<G.vexnum;v++){ // �������Ǵ�v=0��ʼ����
        if(!(visited[v]))
            DFS(G, v);
    }
}

// bfs
// (�����Ѿ�д�ˣ���������ע�͵�)
//int FirstNeighbor(MGraph G, int v);
//int NextNeighbor(MGraph G, int v, int w);
//
//bool visited[MaxVertNum]; // ���ʱ������

int queue[maxsize];   // ��ʼ����������
int front=0, rear=0;  // ��ͷ��βָ��

void BFS(MGraph G, int v){  // �Ӷ���v�����������������ͼG
    //visit(v);  //���ʳ�ʼ����v
    visited[v]= true; // ��v�����ʱ��
    queue[rear++] = v;//����v�����queue
    while(rear!=front) { // ������в�Ϊ�գ������ѭ��
        v = queue[front++];//����v����
        for(int w= FirstNeighbor(G,v); w>=0; w= NextNeighbor(G,v,w)){ // ������е��ڽӵ�
            if(!visited[w]){ // wΪv����δ���ʵ��ڽӶ���
                // visit(w);//���ʶ���w
                visited[w]= true;  // ��w���ѷ��ʱ��
                queue[rear++]=w;   //����w�����
            }//if
        }// for
    }
}

void BFSTraverse(MGraph G){ // ��ͼ���й�����ȱ���
    for(int i=0;i<G.vexnum;i++)
        visited[i]= false; // ��ʼ���ѷ��ʱ������
    for(int i=0;i<G.vexnum;i++){ // ��0�Ŷ��㿪ʼ����
        if(!(visited[i]))        // ��ÿ����ͨ��������һ��BFS
            BFS(G, i);
    }
}
