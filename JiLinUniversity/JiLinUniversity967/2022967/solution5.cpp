//
// Created by 98708 on 2022/10/1.
//

/*ÿ�ι����¼������Ʒ���ƣ����ۣ������������ܶ����Ϣ����д����createʵ�ִ��ļ�
 * �ж�ȡ���й����¼����һ���������ٶ��ļ��д洢��Ϣ��ṹ����Ϣ��ʽ��Ӧ����Ҫ
 * ���ļ����ɺ�������ʽ��������*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    char name[20];     // ��Ʒ����
    double price;  // �۸�
    int sums;       // ����
    double cost;    // �����ܶ��
    struct Node *next;
}Node, *LinkList;

LinkList create(const char* name){
    // β�巨����������
    LinkList head = (LinkList) malloc(sizeof(Node)); // ͷָ��
    LinkList s, r=head; // r�Ǳ�βָ��

    // ����ֵ
    FILE *file = fopen(name, "r");
    while(true){
        /*feof(fp)����������ֵ:��������ļ�����������feof��fp����ֵΪ����ֵ������Ϊ0��*/
        if(feof(file)!=0) break; // �����ļ����������˳�

        s=(LinkList) malloc(sizeof (Node));
        fscanf(file,"%s %lf %d %lf", &s->name, &s->price, &s->sums, &s->cost);
        printf("%s %lf %d %lf\n", s->name, s->price, s->sums, s->cost);

        r->next=s;
        r=s;
    }
    r->next= nullptr;
    printf("�ر��ļ������أ�%d", fclose(file));

    return head->next;
}

int main(){
    LinkList l = create("C:\\Users\\98708\\Desktop\\algorithm\\JiLinUniversity967\\2022967\\solution5.txt");
    printf("%s", l->name);
    return 0;
}

/*���Ҫ���ļ��ж�ȡһ��double���͵ĸ�����, �Ͳ�����%f, ��Ҫ��%lf�ſ���.
 * ׷��һ��ԭ��, ����Ϊ��ʽ��"%f"ָʾ����һ��float����(4���ֽ�), ������
 * ����ָ��λ��(&a)��һ��˫����(double)����, ռ8���ֽ�, ����������ĵ�
 * һ��fscanf�����, ʵ���ϰ�a����float����, Ҳ����ֻ����8���ֽڵ�ǰ4
 * ���ֽ�, �������4���ֽڲ�û��, ��������a�����ݾͲ���һ����ȷ��ֵ.����
 * ʽ��"%lf"�������η�l����ʾ����һ�������͵ĸ�����(��˫����), ���л��
 * ����ȷ��ֵ.*/

/* feof(fp)����������ֵ:��������ļ�����������feof��fp����ֵΪ����ֵ������Ϊ0
 * if(feof(file)!=0) break; */