//#include <stdio.h>
//#include<stdio.h> 
//#include<stdlib.h>
//#define m 5
//#define n 6
//#define MAXSIZE 100//�������Ԫ���������ֵΪ100
////ϡ��������Ԫ��˳���洢��ʾ
//struct node{
//	int row, col;//���±�����±�
//	int data; //Ԫ��ֵ 
//};
// struct TSMatrix {
//	node data[MAXSIZE];//����Ԫ��Ԫ���data[0]δ�� ,��¼�±��1��ʼ 
//	int mu, nu, tu;//����������������Ԫ���� ����¼�����У�����������㻹ԭ���� 
//};
//int CreTSMatrix(TSMatrix* M, int a[m][n])//������ֵ��Ԫ����
//{
//	int i, j, k = 0;//ѭ������i�����У�j�����У�k������Ԫ���±꣬��1��ʼ 
//	M->mu = m;//��ֵ������ 
//	M->nu = n;//��ֵ������ 
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] != 0)//��¼����ֵ 
//			{
//				M->data[k].row = i ;//��¼�к� 
//				M->data[k].col = j;//��¼�к� 
//				M->data[k].data = a[i][j];//��¼Ԫ��ֵ 
//				k++;//�±��һ 
//			}
//		}
//	}
//	M->tu = k;//�õ������ܸ�����һ����Ϊ��ֵΪ1 
//	return 1;
//}
//int PrintTSM(TSMatrix M)//�����Ԫ����
//{
//	if (M.mu == 0 || M.nu == 0)//�ж������ǲ���Ϊ0 
//	{
//		printf("����Ϊ�գ�\n");
//		return 1;
//	}
//	printf("����Ϊ%d������Ϊ%d\n", M.mu, M.nu);
//	if (M.tu == 0)//�жϷ������Ϊ�� 
//	{
//		printf("����Ϊ�����\n");
//		return 1;
//	}
//	int k;
//	for (k = 0; k < M.tu; k++)//ѭ��������� 
//		printf("%d\t%d\t%d\n", M.data[k].row, M.data[k].col, M.data[k].data);
//	return 1;
//}
//void reverseSMatrix(TSMatrix *M) {
//	if (M->mu == 0 || M->nu == 0)//�ж������ǲ���Ϊ0 
//	{
//		printf("����Ϊ�գ�\n");
//	}
//	//printf("����Ϊ%d������Ϊ%d\n", M->mu, M->nu);
//	if (M->tu == 0)//�жϷ������Ϊ�� 
//	{
//		printf("����Ϊ�����\n");
//	}
//	int tmp = M->mu;
//	M->mu = M->nu;
//	M->nu = tmp;
//	for (int i = 0; i < M->tu;i++) {
//		int pos = M->data[i].row;
//		M->data[i].row = M->data[i].col;
//		M->data[i].col = pos;
//	}
//}
////����������
//int main() {
//	TSMatrix M;
//	int i, j;
//	int a[m][n] = { {0,0,2,0,0,0},{3,0,0,4,0,0},{0,0,0,5,0,0},{0,0,0,0,0,6},{0,0,0,0,0,0}};
//	printf("��ӡ���ԭ����\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%3d", a[i][j]);
//		printf("\n");
//	}
//	CreTSMatrix(&M, a);
//	printf("��Ԫ����Ϊ��\n");
//	PrintTSM(M);
//	reverseSMatrix(&M);
//	PrintTSM(M);
//	return 0;
//}