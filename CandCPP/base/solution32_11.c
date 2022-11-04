//
// Created by 98708 on 2022/11/3.
//

//给出年月日，计算该日是该年的第几天。
#include "stdio.h"

int isRun(int year);
int main(){
    // 平年
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, day; // 年月日
    int ans=0;
    scanf("%d %d %d", &year, &month, &day);
    int falg = isRun(year);// 判断是否为闰年

    for(int i=0; i<month;i++){
        ans+=months[i];
    }
    ans+=day;
    //如果是闰年，且是二月（3月1日）以后，则加一天
    if(falg==1 && month>2)
        ans++;
    printf("是该年的第%d天", ans);

    return  0;
}

int isRun(int year){
    if(year%400==0 || year%4==0&&year%100!=0)
        return 1;// 闰年
    return 0;
}