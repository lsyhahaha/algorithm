//
// Created by 98708 on 2022/9/22.
//

/*����һ����Ȩ����ͼG=(V,E),w��G��һ�����㣬w��ƫ�ľඨ��Ϊ��max(��u��w�����·������|u��V)�����е�
 * ·������ָ����·���ϸ���Ȩֵ֮�͡���G��ƫ�ľ���С�Ķ����ΪG�����ģ������һ����������ͼG�����ġ�*/

/*�㷨˼�룺
 * ��һ�����ƫ�ľ�������ඥ�㵽�˶�������·�������һ����
 * �ڿ��õϽ�˹�����㷨������ඥ�㵽һ����������·����Ȼ��õ���ƫ�ľࡣ
 * ��ѭ�����ÿ�������ƫ�ľ࣬��ƫ�ľ���С�Ķ��㷵�أ�
 * */
#include "bits/stdc++.h"
using namespace std;
#define maxsize 100

typedef struct graph
{
    int v[maxsize];//�涥��
    int edges[maxsize][maxsize];//���
    int n;//������
}Graph;

void Dijkstra(Graph g, int i, int a[maxsize][maxsize]){
    /*�Ͻ�˹�����㷨*/
}

void GetCenter(Graph g){
    int a[maxsize][maxsize];
    for(int i=0; i<g.n; i++){ // ���õϽ�˹�����㷨���ÿ������ĵ�Դ���·��
        Dijkstra(g, i, a);
    }
    int center, centernum=maxsize; // center�洢ͼ�����ģ�centernum�洢���ĵ�ƫ�ľ�
    for(int i =0;i<g.n;i++){
        int max=0;
        for(int j=0;j<g.n;j++)//��һ����i��ƫ�ľ�
            if(a[j][i]>max)   //a[j][i]��ʾ������㵽i������·��
                max=a[j][i];
        if(max<centernum)    //��������
        {
            centernum=max;
            center=i;
        }
    }
    printf("%d��ͼ�����ģ�ƫ�ľ�Ϊ%d",center,centernum);
}