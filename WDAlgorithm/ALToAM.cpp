///*
//	д����ͼ���ڽӱ���ʾת�����ڽӾ����ʾ���㷨
//	������
//		����֮ǰҲд���ڽӾ���Ĵ洢��ʽ�����������Ǿ�ֻ��Ҫȥ�����ڽӱ��е�ÿһ�����㣬
//		�����ݱߵ���Ϣ�������������ڽӾ����м���
//*/
////�ֱ�д���ڽӱ����ڽӾ������ַ�ʽ�Ľṹ��
////�ṹ��Ĺ���һ��Ҫ�ʹ����ڽӱ��������ڽӾ������һģһ������Ȼ�������⣬����������
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//#define TYPE int
//struct AMGraph {
//	TYPE Vertex[MAXSIZE];//��������
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//};//�ڽӾ���
//
//
////�ڽӱ��洢��ͼ
//struct EdgeNode {//�߱����
//	int index;//�ñ���ָ��Ķ����λ��,�ڶ������������λ����Ϣ
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӱ�
//};
//
//struct VertexNode {//������ڵ�
//	char info;//������Ϣ
//	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
//};
//
//struct ALGraph {
//	VertexNode adjlist[MAXSIZE];//��������
//	int numE, numV;//������������
//};
//void edgeIput(ALGraph *alG, AMGraph *amG, int index, int *visited) {
//	visited[index] = 1;//���Ϊ�ѷ���
//	for (EdgeNode *p = alG->adjlist[index].firstEdge; p; p = p->next) {
//		amG->Edge[index][p->index] = p->weight;//����Ϣ�����ڽӾ���
//		if (!visited[p->index])
//			edgeIput(alG, amG, p->index, visited);
//	}
//}
//void transform(ALGraph *alG, AMGraph *amG) {//��ʼ����ת��
//	
//	amG->numE = alG->numE;
//	amG->numV = alG->numV;
//	for (int v = 0; v < amG->numV; v++) {
//		amG->Vertex[v] = alG->adjlist[v].info;//������Ϣ�����ڽӾ���
//	}
//	//��ʼ��ͼ
//	for (int i = 0; i < amG->numV; i++) {
//		for (int j = 0; j < amG->numV; j++) {
//			i == j ? amG->Edge[i][j] = 0 : amG->Edge[i][j] = 32767;
//		}
//	}
//	for (int v = 0; v < amG->numV; v++) {
//		//�������Ϣ
//		EdgeNode *p = alG->adjlist[v].firstEdge;
//		while (p) {
//			amG->Edge[v][p->index] = p->weight;
//			p = p->next;
//		}
//	}
//}
//int main() {
//	ALGraph alG;
//	AMGraph amG;
//	void createGraphInFile(ALGraph*);//��������
//	void dispGraph(AMGraph *);
//	createGraphInFile(&alG);//����ͼG
//	transform(&alG, &amG);
//	dispGraph(&amG);
//	return 0;
//}