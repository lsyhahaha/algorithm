//
// Created by 98708 on 2022/11/3.
//

//���������գ���������Ǹ���ĵڼ��졣
#include "stdio.h"

int isRun(int year);
int main(){
    // ƽ��
    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, day; // ������
    int ans=0;
    scanf("%d %d %d", &year, &month, &day);
    int falg = isRun(year);// �ж��Ƿ�Ϊ����

    for(int i=0; i<month;i++){
        ans+=months[i];
    }
    ans+=day;
    //��������꣬���Ƕ��£�3��1�գ��Ժ����һ��
    if(falg==1 && month>2)
        ans++;
    printf("�Ǹ���ĵ�%d��", ans);

    return  0;
}

int isRun(int year){
    if(year%400==0 || year%4==0&&year%100!=0)
        return 1;// ����
    return 0;
}