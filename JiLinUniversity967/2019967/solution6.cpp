//
// Created by 98708 on 2022/9/25.
//

/*程序设计题4
 * a[200]的整数数组，输出并打印其中数字出现的个数，每行打印数据值和次数，然
 * 后换行打印下一个数据和次数。本题可以只写部分代码，不必写全程序。*/


#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a[10]={1,2,2,3,4,5,2,43,324,2345};
    map<int,int> mp;  // 初始化一个哈希表
    for(int i=0;i<10;i++){
        mp[a[i]]++;
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        printf("%d %d\n",it->first,it->second);
    }
    return 0;
}