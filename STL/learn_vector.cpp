//
// Created by 98708 on 2023/9/6.
//

//ѧϰʹ��vector��

#include "iostream"
#include "vector"
#include "fstream"
#include "algorithm"
using namespace std;

// ����
void advantage(){
    vector<int>vec0={1,2,3,4,5,6,7,8,9,10};

    int length = vec0.size();
}

//��ʼ��
void init(){
    //�������10������Ԫ�ص�������������ΪԪ�������������������κκϷ����������ͣ��������г�ֵ����ֵ��ȷ��
    vector<int>a(10);

    //�������10������Ԫ�ص��������Ҹ�����ÿ��Ԫ�س�ֵΪ1
    vector<int>aa(10,1);

    //������b������aaa��ֵ��aaaa��ֵ��ȫ�ȼ���b��ֵ
    vector<int>b(10);
    vector<int>aaa(b);

    //������b�д�0-2������������Ԫ�ظ�ֵ��a��a������Ϊint��
    vector<int>aaaa(b.begin(),b.begin()+3);

    //ֱ�Ӹ�ֵ
    vector<int> vec0 = {10, 20, 30, 40};             // [10 20 30 40]


    std::vector<int> vec1;                                // �յ�vector����������Ϊint
    std::vector<int> vec2(4);                             // 4��ֵΪ0��vector
    std::vector<int> vec3 (4,10);                         // 4��ֵΪ10��vector [10 10 10 10]
    std::vector<int> vec4 (vec3.begin(),vec3.end());      // [10 10 10 10]
    std::vector<int> vec5 (vec3);                         // [10 10 10 10]
    std::vector<int> vec6 = {10, 20, 30, 40};             // [10 20 30 40]

}

//��
void add(){
    //������a�����Ԫ��
    vector<int>a;
    for(int i=0;i<10;++i){a.push_back(i);}

    //.��������ѡ��Ԫ�������������
    int aa[6]={1,2,3,4,5,6};
    vector<int> b;
    for(int i=0;i<=4;++i){b.push_back(aa[i]);}

    //������������ѡ��Ԫ�������������
    int aaa[6]={1,2,3,4,5,6};
    vector<int>bb;
    vector<int>c(aaa,aaa+4);
    for(vector<int>::iterator it=c.begin();it<c.end();++it)
    {
        bb.push_back(*it);
    }

    //���ļ��ж�ȡԪ�������������
    ifstream in("data.txt");
    vector<int>d;
    for(int i;in>>i;){d.push_back(i);}

    // ����ĸ�ֵ��ʽ
    vector<int>aaaa;
    for(int i=0;i<10;++i){aaaa[i]=i;}//�±�ֻ��������ȡ�Ѿ����ڵ�Ԫ��

}

//ɾ
//��
//��

//algoritm
void common_algoritm(){
    vector<int>a(10,1), b(10,2);

    //��a�еĴ�a.begin()������������a.end()��������������Ԫ�ؽ��д�С��������
    sort(a.begin(),a.end());

    //��a�еĴ�a.begin()������������a.end()��������������Ԫ�ص��ã��������У���a��Ԫ��Ϊ1,3,2,4,���ú�Ϊ4,2,3,1
    reverse(a.begin(),a.end());

    //��a�еĴ�a.begin()������������a.end()��������������Ԫ�ظ��Ƶ�b�У���b.begin()+1��λ�ã�����������ʼ���ƣ����ǵ�ԭ��Ԫ��
    copy(a.begin(),a.end(),b.begin()+1);

    //��a�еĴ�a.begin()������������a.end()��������������Ԫ���в���10�������ڷ������������е�λ��
    find(a.begin(),a.end(),10);
}