//#include <stdio.h>
//#include <string.h>
//void Next(char* T, int* next) {
//    int i = 0;
//    next[0] = -1;
//    int j = -1;
//    while (i < strlen(T)) {
//        if (j == -1 || T[i] == T[j]) 
//            next[++i] = ++j;
//        else 
//            j = next[j];
//    }
//}
//int KMP(char* S, char* T) {
//    int next[10];
//    Next(T, next);//����ģʽ��T,��ʼ��next����
//    int i = 0;
//    int j = 0;
//    while (i < strlen(S) && j < strlen(T)) {
//        //j==0:����ģʽ���ĵ�һ���ַ��ͺ͵�ǰ���Ե��ַ�����ȣ�S[i]==T[j],�����Ӧλ���ַ���ȣ���������£�ָ��ǰ���Ե�����ָ���±�i��j�������
//        if (j == 0 || S[i] == T[j]) {
//            i++;
//            j++;
//        }
//        else {
//            j = next[j];//������Ե������ַ�����ȣ�i������j��Ϊ��ǰ�����ַ�����nextֵ
//        }
//    }
//    if (j == strlen(T)) {//�������Ϊ�棬˵��ƥ��ɹ�
//        return i - j +1;
//    }
//    return -1;
//}
//
//int main() {
//    char mainStr[] = "ababcabcacbab";
//    char subStr[] = "cac";
//    int i = KMP(mainStr, subStr);
//    printf("%d", i);
//    return 0;
//}