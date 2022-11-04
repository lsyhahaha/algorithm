//
// Created by 98708 on 2022/11/3.
//

/*定义结构体类型来描述如图所示的学生信息卡片？（p172）*/

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
    int code;// 学号
    brith brithDate;// 出生日期
    workpos pos;//工作单位
};