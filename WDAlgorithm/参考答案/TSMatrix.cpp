//#include <stdio.h>
//#include<stdio.h> 
//#include<stdlib.h>
//#define m 5
//#define n 6
//#define MAXSIZE 100//假设非零元个数的最大值为100
////稀疏矩阵的三元组顺序表存储表示
//struct node{
//	int row, col;//行下标和列下标
//	int data; //元素值 
//};
// struct TSMatrix {
//	node data[MAXSIZE];//非零元三元组表，data[0]未用 ,记录下标从1开始 
//	int mu, nu, tu;//行数、列数、非零元个数 ，记录好行列，非零个数方便还原数组 
//};
//int CreTSMatrix(TSMatrix* M, int a[m][n])//创建赋值三元矩阵
//{
//	int i, j, k = 0;//循环遍历i代表行，j代表列，k代表三元组下标，从1开始 
//	M->mu = m;//赋值行总数 
//	M->nu = n;//赋值列总数 
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] != 0)//记录非零值 
//			{
//				M->data[k].row = i ;//记录行号 
//				M->data[k].col = j;//记录列号 
//				M->data[k].data = a[i][j];//记录元素值 
//				k++;//下标加一 
//			}
//		}
//	}
//	M->tu = k;//得到非零总个数减一是因为初值为1 
//	return 1;
//}
//int PrintTSM(TSMatrix M)//输出三元矩阵
//{
//	if (M.mu == 0 || M.nu == 0)//判断行列是不是为0 
//	{
//		printf("矩阵为空！\n");
//		return 1;
//	}
//	printf("行数为%d，列数为%d\n", M.mu, M.nu);
//	if (M.tu == 0)//判断非零个数为零 
//	{
//		printf("矩阵为零矩阵！\n");
//		return 1;
//	}
//	int k;
//	for (k = 0; k < M.tu; k++)//循环遍历输出 
//		printf("%d\t%d\t%d\n", M.data[k].row, M.data[k].col, M.data[k].data);
//	return 1;
//}
//void reverseSMatrix(TSMatrix *M) {
//	if (M->mu == 0 || M->nu == 0)//判断行列是不是为0 
//	{
//		printf("矩阵为空！\n");
//	}
//	//printf("行数为%d，列数为%d\n", M->mu, M->nu);
//	if (M->tu == 0)//判断非零个数为零 
//	{
//		printf("矩阵为零矩阵！\n");
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
////主函数测试
//int main() {
//	TSMatrix M;
//	int i, j;
//	int a[m][n] = { {0,0,2,0,0,0},{3,0,0,4,0,0},{0,0,0,5,0,0},{0,0,0,0,0,6},{0,0,0,0,0,0}};
//	printf("打印输出原矩阵：\n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%3d", a[i][j]);
//		printf("\n");
//	}
//	CreTSMatrix(&M, a);
//	printf("三元矩阵为：\n");
//	PrintTSM(M);
//	reverseSMatrix(&M);
//	PrintTSM(M);
//	return 0;
//}