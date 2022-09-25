///*
//	Dijkstra 算法：
//				其实该算法和prim算法相似，不同的仅仅是更新那一块
//				我们这里仍然需要用到一个标记数组flag,用于记录顶点是否已被访问，一个路径数组dist，用于记录
//				目前到达各顶点的距离，此外我们还需要一个前置顶点数组prevs，用于存储路径
//
//*/
//#define MAXSIZE 100 //数组最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct AMGraph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//};
//
//void dijkstra(AMGraph *G, int start) {
//	int flag[MAXSIZE];//标记数组
//	int dist[MAXSIZE];//可到达顶点的距离数据
//	int prevs[MAXSIZE];//存储每个顶点的前驱，也就是存储路径
//	int record ;
//	for (int i = 0; i < G->numV; i++) {
//		dist[i] = G->Edge[start][i];//初始化start到各顶点的距离
//		prevs[i] = 0;//初始化
//		flag[i] = 0;
//	}
//	flag[start] = 1;//传入的顶点设为已访问
//	for (int i = 1; i < G->numV; i++) {//因为源点已加入集合，则共进行G->numV-1次循环
//		int min = 32767;
//		//找目前能到达的权值最小顶点
//		for (int j = 0; j < G->numV; j++) {
//			if (!flag[j] && dist[j] < min) {//dist不为0代表未访问过
//				min = dist[j];
//				record = j;
//			}
//		}
//		flag[record] = 1;
//		//当我们加入新顶点时，我们要判断加入新顶点后是否路径会缩短，如果有这种情况，就要更新dist
//		for (int m = 0; m < G->numV; m++) {
//			if (!flag[m] && dist[m] > G->Edge[record][m] + dist[record]) {//当前 记录的从源点到k的距离 大于 加入k后的距离，进行更新！！
//				dist[m] = G->Edge[record][m] + dist[record];
//				prevs[m] = record;//一旦发生更换将m处的值设为k，代表由k处的顶点指向m处的顶点目前最近，即k是m的前驱
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