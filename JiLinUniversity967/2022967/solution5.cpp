//
// Created by 98708 on 2022/10/1.
//

/*每次购物记录包含产品名称，单价，数量，花费总额等信息，编写函数create实现从文件
 * 中读取所有购物记录构建一个单链表（假定文件中存储信息与结构体信息格式对应），要
 * 求文件名由函数的形式参数传入*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    char name[20];     // 产品名称
    double price;  // 价格
    int sums;       // 数量
    double cost;    // 花费总额度
    struct Node *next;
}Node, *LinkList;

LinkList create(const char* name){
    // 尾插法构建单链表
    LinkList head = (LinkList) malloc(sizeof(Node)); // 头指针
    LinkList s, r=head; // r是表尾指针

    // 输入值
    FILE *file = fopen(name, "r");
    while(true){
        /*feof(fp)有两个返回值:如果遇到文件结束，函数feof（fp）的值为非零值，否则为0。*/
        if(feof(file)!=0) break; // 遍历文件结束，则退出

        s=(LinkList) malloc(sizeof (Node));
        fscanf(file,"%s %lf %d %lf", &s->name, &s->price, &s->sums, &s->cost);
        printf("%s %lf %d %lf\n", s->name, s->price, s->sums, s->cost);

        r->next=s;
        r=s;
    }
    r->next= nullptr;
    printf("关闭文件，返回：%d", fclose(file));

    return head->next;
}

int main(){
    LinkList l = create("C:\\Users\\98708\\Desktop\\algorithm\\JiLinUniversity967\\2022967\\solution5.txt");
    printf("%s", l->name);
    return 0;
}

/*如果要从文件中读取一个double类型的浮点数, 就不能用%f, 而要用%lf才可以.
 * 追究一下原因, 是因为格式符"%f"指示的是一个float类型(4个字节), 而我们
 * 给的指针位置(&a)是一个双精度(double)类型, 占8个字节, 这样在上面的第
 * 一个fscanf语句中, 实际上把a当初float类型, 也就是只填了8个字节的前4
 * 个字节, 而后面的4个字节并没变, 这样变量a的数据就不是一个正确的值.而格
 * 式符"%lf"利用修饰符l来表示这是一个长类型的浮点数(即双精度), 所有会得
 * 到正确的值.*/

/* feof(fp)有两个返回值:如果遇到文件结束，函数feof（fp）的值为非零值，否则为0
 * if(feof(file)!=0) break; */