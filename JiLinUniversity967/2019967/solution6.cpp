//
// Created by 98708 on 2022/9/25.
//

/*���������4
 * a[200]���������飬�������ӡ�������ֳ��ֵĸ�����ÿ�д�ӡ����ֵ�ʹ�����Ȼ
 * ���д�ӡ��һ�����ݺʹ������������ֻд���ִ��룬����дȫ����*/


#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a[10]={1,2,2,3,4,5,2,43,324,2345};
    map<int,int> mp;  // ��ʼ��һ����ϣ��
    for(int i=0;i<10;i++){
        mp[a[i]]++;
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        printf("%d %d\n",it->first,it->second);
    }
    return 0;
}