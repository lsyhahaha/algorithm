//
// Created by 98708 on 2023/9/6.
//

//学习使用vector库

#include "iostream"
#include "vector"
#include "fstream"
#include "algorithm"
using namespace std;

// 属性
void advantage(){
    vector<int>vec0={1,2,3,4,5,6,7,8,9,10};

    int length = vec0.size();
}

//初始化
void init(){
    //定义具有10个整型元素的向量（尖括号为元素类型名，它可以是任何合法的数据类型），不具有初值，其值不确定
    vector<int>a(10);

    //定义具有10个整型元素的向量，且给出的每个元素初值为1
    vector<int>aa(10,1);

    //用向量b给向量aaa赋值，aaaa的值完全等价于b的值
    vector<int>b(10);
    vector<int>aaa(b);

    //将向量b中从0-2（共三个）的元素赋值给a，a的类型为int型
    vector<int>aaaa(b.begin(),b.begin()+3);

    //直接赋值
    vector<int> vec0 = {10, 20, 30, 40};             // [10 20 30 40]


    std::vector<int> vec1;                                // 空的vector，数据类型为int
    std::vector<int> vec2(4);                             // 4个值为0的vector
    std::vector<int> vec3 (4,10);                         // 4个值为10的vector [10 10 10 10]
    std::vector<int> vec4 (vec3.begin(),vec3.end());      // [10 10 10 10]
    std::vector<int> vec5 (vec3);                         // [10 10 10 10]
    std::vector<int> vec6 = {10, 20, 30, 40};             // [10 20 30 40]

}

//增
void add(){
    //向向量a中添加元素
    vector<int>a;
    for(int i=0;i<10;++i){a.push_back(i);}

    //.从数组中选择元素向向量中添加
    int aa[6]={1,2,3,4,5,6};
    vector<int> b;
    for(int i=0;i<=4;++i){b.push_back(aa[i]);}

    //从现有向量中选择元素向向量中添加
    int aaa[6]={1,2,3,4,5,6};
    vector<int>bb;
    vector<int>c(aaa,aaa+4);
    for(vector<int>::iterator it=c.begin();it<c.end();++it)
    {
        bb.push_back(*it);
    }

    //从文件中读取元素向向量中添加
    ifstream in("data.txt");
    vector<int>d;
    for(int i;in>>i;){d.push_back(i);}

    // 错误的赋值方式
    vector<int>aaaa;
    for(int i=0;i<10;++i){aaaa[i]=i;}//下标只能用来获取已经存在的元素

}

//删
//改
//查

//algoritm
void common_algoritm(){
    vector<int>a(10,1), b(10,2);

    //对a中的从a.begin()（包括它）到a.end()（不包括它）的元素进行从小到大排列
    sort(a.begin(),a.end());

    //对a中的从a.begin()（包括它）到a.end()（不包括它）的元素倒置，但不排列，如a中元素为1,3,2,4,倒置后为4,2,3,1
    reverse(a.begin(),a.end());

    //把a中的从a.begin()（包括它）到a.end()（不包括它）的元素复制到b中，从b.begin()+1的位置（包括它）开始复制，覆盖掉原有元素
    copy(a.begin(),a.end(),b.begin()+1);

    //在a中的从a.begin()（包括它）到a.end()（不包括它）的元素中查找10，若存在返回其在向量中的位置
    find(a.begin(),a.end(),10);
}