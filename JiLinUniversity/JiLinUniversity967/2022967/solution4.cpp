//
// Created by 98708 on 2022/10/1.
//

/*��д�ݹ麯��������һ���Ǹ�����������������ֵĺͣ����磬��������122����
 * �����������Ϊ1��2��2�����Ժ�Ϊ5*/

/*�㷨˼�룺
 * ÿһ�ν����ֶ�10ȡģ���õ���λ��Ȼ������10��ֱ����Ϊ0*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}