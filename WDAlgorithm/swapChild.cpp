///*
//	�Ա�дһ���㷨��һ�Ŷ����������нڵ�������������н�����
//	������
//		������Ȼ���Բ��õݹ�ķ�ʽ���н���
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void swapTree(biTree *T) {//�䱾�ʾ��Ǵ�Ҷ�ӽڵ㿪ʼ���н�����һ·�ƽ������ڵ�
//	biTree *p = T,*t;
//	if (!p) return;
//	if (!p->lchild&&!p->rchild) {//���û�����Һ��ӣ��Ͳ���Ҫ�����ˣ�ֱ�ӷ���
//		return;
//	}
//	else {
//		swapTree(p->lchild);//����������
//		swapTree(p->rchild);//����������   ���ﲻ�ܲ�ȡ�������
//		t = p->lchild;
//		p->lchild = p->rchild;
//		p->rchild = t;
//	}
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//����һ�Ŷ�����
//	inOrder(T);
//	printf("\n");
//	swapTree(T);
//	inOrder(T);
//	return 0;
//}