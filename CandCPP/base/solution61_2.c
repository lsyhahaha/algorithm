//
// Created by 98708 on 2022/11/5.
//

#include "stdio.h"
#include "math.h"

void childset(int A[], int len);

int main(){
    int n = 3;
//    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++) A[i]=i;
    childset(A, n);

    return 0;
}

void childset(int A[], int len){
    //����{0,0,...}��{1��1...}
    int m=pow(2,len);
    int barry[len], nums;
    for(int i=0; i<m; i++){// i����ÿһ���Ӽ���Ӧ�Ķ�������
        printf("{");
        nums=0;
        for(int j=0; j<len; j++){
            if(i & (1<<j)){
               barry[nums++]=j;
            }
        }
        //����Ӽ�����
        for(int j=0; j<nums;++j){
            printf("%d",barry[j]);
            if(j<nums-1){
                printf(",");
            }
        }
        printf("}\n", barry[nums-1]);
    }
}