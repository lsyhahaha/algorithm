//
// Created by 98708 on 2022/11/3.
//

/*����ṹ��������������ͼ��ʾ��ѧ����Ϣ��Ƭ����p172��*/

#include "stdio.h"

typedef struct brith{
    int year,month,day;
}brith;

typedef struct workpos{
    char xueyuan[20], nianji[20], banji[20];
}workpos;

typedef struct student{
    char name[10];
    int sex;
    int code;// ѧ��
    brith brithDate;// ��������
    workpos pos;//������λ
};