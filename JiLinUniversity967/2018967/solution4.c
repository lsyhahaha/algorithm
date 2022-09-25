//
// Created by 98708 on 2022/9/19.
//

// �����ڽӾ���洢������ͼ�У��������i�������ͨ��k������Ľڵ�
/*�㷨˼�룺
 *
 * */

#include <stdbool.h>
#include "stdio.h"

#define N 8

void dfs(int A[N][N], int n, int i, int k, int visited[], bool hashtable[]){
    // �����÷����������i�������ͨ��k������Ľڵ�
    // ����˵����A�ڽӾ���nΪͼ�нڵ��ʽ��i��㣬k����k����visited:???, hashtable[]���ڼ�¼�����ܵ���Ľڵ�Ľ������
    if (k == 0) {// k=0,��ʾ��ǰ�ڵ㼴Ϊ�յ�
        hashtable[k] = true; // ����Ϊtrue,��ʾ���Ե���
        return;
    }
    for (int j = 0; j < n; j++){
        if (visited[j] == 0 && A[i][j] == 1){
            visited[j] = 1; // ��ǣ���ʾ����·���Ѿ������ʹ���
            dfs(A, n, j, k-1, visited, hashtable);
            visited[j] = 0; // ���ݳ�����ȡ�����
        }
    }
}

void distance_k(int A[N][N], int n, int i, int k){
    // �����÷���
    // ����˵����
    int visited[N] = {0};
    bool hashtable[N] = {false};
    dfs(A, n, i, k, visited, hashtable);

    // ������
    for (int j = 0; j < N; j++){
        printf("%d", hashtable[j]);
        if (hashtable[j] == true) {
            printf("%d can to %d.\n", i, j);
        }
    }
}

int main(){
    int A[N][N] = {
            {0,1,1,0,0,0,0,0},
            {0,0,0,1,1,0,0,0},
            {0,0,0,0,0,0,1,1},
            {0,1,0,0,0,0,1,1},
            {0,10,0,0,0,0,0,1},
            {0,0,1,0,0,0,1,0},
            {0,0,1,0,0,1,0,0},
            {0,0,0,1,1,0,0,0}
    };
    distance_k(A,N,1,1);
    return 0;
}