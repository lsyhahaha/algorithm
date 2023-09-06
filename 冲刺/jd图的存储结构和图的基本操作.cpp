//
// Created by 98708 on 2022/11/26.
//

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

//ͼ�Ĵ洢�ṹ���ڽӾ��󷨡��ڽӱ���ʮ����������ͼ�����ڽӶ��ر�����ͼ��

// �ڽӾ���
#define MaxVertNum 100  // ������Ŀ�����ֵ
typedef char VertexType; // �������������
typedef int EdgrType; // ��Ȩͼ�б���Ȩֵ����������
typedef struct {
    VertexType Vex[MaxVertNum]; //�����
    EdgrType Edge[MaxVertNum][MaxVertNum]; // �ڽӾ��󣬱߱�
    int vexnum, arcnum;         // ͼ�ĵ�ǰ�������ͻ���
}MGraph;

// �ڽӱ�
#define MaxVertNum 100  // ͼ�ж�����Ŀ�����ֵ
typedef struct ArcNode{ // �߱���
    int adjvex;         // �û���ָ��Ķ����λ��
    struct ArcNode *next; // ָ����һ�����
    // InfoType info;   // ���ı�Ȩֵ
}ArcNode;

typedef struct VNode{   // �������
    VertexType data;  // ������Ϣ
    ArcNode *first;   // ָ���һ�������ö���Ļ���ָ��
}VNode, AdjList[MaxVertNum];

typedef struct{
    AdjList vertices;  // �ڽӱ�
    int vexnum, arcnum; // ͼ�Ķ������뻡��
}ALGraph;


/*
 * ���ж�ͼG�Ƿ���ڱߣ�
 * ���г�ͼG����x�ڽӵı�
 * ����ͼ�в��붥��x
 * ����ͼ��ɾ������x
 * ��������ߣ�x,y�����������<x,y>���ڣ���ɾ���ñ�
 * ����ͼ�ж���x�ĵ�һ���ڽӵ㣬�����򷵻ض���š���xû���ڽӵ����ͼ�в�����x���򷵻�-1.
 * �߻�ȡG������ߣ�x,y�����������<x,y>��Ȩֵ
 * ������ͼG������ߣ�x,y�����������<x,y>��ȨֵΪv
 * ���⣬����ͼ�ı����㷨������ĳ�ַ�ʽ����ͼ�е�ÿ�������ҽ�����һ�Ρ�ͼ�ı����㷨����������ȱ����͹�����ȱ���*/