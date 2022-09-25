#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
struct Link {
	int data;
	Link *next;
	Link *pre;
};
Link *createDouLoopLink() {
	int n, data;
	Link *head = (Link *)malloc(sizeof(Link));
	head->next = NULL;
	head->pre = NULL;
	Link *p = head;
	printf("请输入节点个数：n=");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("请输入第%d个节点值:", i + 1);
		scanf("%d", &data);
		Link *newP = (Link*)malloc(sizeof(Link));
		newP->data = data;
		newP->pre = p;
		p->next = newP;
		p = newP;
	}
	p->next = head;
	head->pre = p;
	return head;
}