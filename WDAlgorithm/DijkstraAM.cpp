///*
//	Dijkstra �㷨��
//				��ʵ���㷨��prim�㷨���ƣ���ͬ�Ľ����Ǹ�����һ��
//				����������Ȼ��Ҫ�õ�һ���������flag,���ڼ�¼�����Ƿ��ѱ����ʣ�һ��·������dist�����ڼ�¼
//				Ŀǰ���������ľ��룬�������ǻ���Ҫһ��ǰ�ö�������prevs�����ڴ洢·��
//
//*/
//#define MAXSIZE 100 //�������ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//};
//
//void dijkstra(AMGraph *G, int start) {
//	int flag[MAXSIZE];//�������
//	int dist[MAXSIZE];//�ɵ��ﶥ��ľ�������
//	int prevs[MAXSIZE];//�洢ÿ�������ǰ����Ҳ���Ǵ洢·��
//	int record ;
//	for (int i = 0; i < G->numV; i++) {
//		dist[i] = G->Edge[start][i];//��ʼ��start��������ľ���
//		prevs[i] = 0;//��ʼ��
//		flag[i] = 0;
//	}
//	flag[start] = 1;//����Ķ�����Ϊ�ѷ���
//	for (int i = 1; i < G->numV; i++) {//��ΪԴ���Ѽ��뼯�ϣ��򹲽���G->numV-1��ѭ��
//		int min = 32767;
//		//��Ŀǰ�ܵ����Ȩֵ��С����
//		for (int j = 0; j < G->numV; j++) {
//			if (!flag[j] && dist[j] < min) {//dist��Ϊ0����δ���ʹ�
//				min = dist[j];
//				record = j;
//			}
//		}
//		flag[record] = 1;
//		//�����Ǽ����¶���ʱ������Ҫ�жϼ����¶�����Ƿ�·�������̣�����������������Ҫ����dist
//		for (int m = 0; m < G->numV; m++) {
//			if (!flag[m] && dist[m] > G->Edge[record][m] + dist[record]) {//��ǰ ��¼�Ĵ�Դ�㵽k�ľ��� ���� ����k��ľ��룬���и��£���
//				dist[m] = G->Edge[record][m] + dist[record];
//				prevs[m] = record;//һ������������m����ֵ��Ϊk��������k���Ķ���ָ��m���Ķ���Ŀǰ�������k��m��ǰ��
//			}
//		}
//	}
//	for (int i = 0; i < G->numV; i++) {
//		i == start ? printf("%d ", 0) : printf("%d ", G->Vertex[prevs[i]]-48);
//	}
//	printf("\n");
//	for (int i = 0; i < G->numV; i++) {
//		 printf("%d ", dist[i]);
//	}
//}
//int main() {
//	void createGraphFromFile(AMGraph *);
//	void dispGraph(AMGraph *G);
//	AMGraph *G = (AMGraph *)malloc(sizeof(AMGraph));
//	createGraphFromFile(G);
//	dispGraph(G);
//	dijkstra(G, 0);
//	return 0;
//}