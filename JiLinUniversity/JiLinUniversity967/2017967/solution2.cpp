//
// Created by 98708 on 2022/9/21.
//

/*�����ַ���s������Ϊn���ַ���һά����a����дһ��������ͳ��a��ÿ���ַ����ַ���
 * s�г��ֵĴ�����Ҫ��ú�����s,a,nΪ�βΣ�һά��������Ϊ����ֵ��
 * ע�⣺������Ϊ����ֵ
 * */

/*�㷨˼�룺
 * ��*/

#include "stdio.h"
#include "string.h"

int* CoutChar(char s[], char a[], int n){
//    �ַ���s,ͳ��a�е�ÿ���ַ���nΪa�ĳ���
    int *ans = new int[n]; // ����һ������Ϊn�����飬���ڼ�¼���
    memset(ans, 0, sizeof(int)*n);// ��ans�����е�ÿ��Ԫ�س�ʼ��Ϊ0
    int len = strlen(s); // ��ȡ�ַ���s�ĳ���len
    for(int i = 0; i < n; i++){
        for (int j = 0; j < len; j++){
            if (a[i] == s[j]){
                ans[i]++;
            }
        }
    }
    return ans;
}


int main()
{
    char str[100];
    char a[4]={'a','b','c'};
    int* ans=NULL;
    while(~scanf("%s",str))
    {
        ans=CoutChar(str,a,3);
        for(int i=0;i<3;i++)
        {
            printf("%c:%d\n",a[i],ans[i]);
        }
    }
    return 0;
}