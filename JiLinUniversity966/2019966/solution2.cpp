//
// Created by 98708 on 2022/7/23.
//

//求第k项的系数（计算二次项的系数）
#include "bits/stdc++.h"
using namespace std;

int xs(int n, int k){
    if (k == 0 && n == 0) return 1;// Cn0情况
    if (k == 0) return 2* xs(n-1, k);// Cn0情况
    if (k==n)   return 3* xs(n-1, k-1); // Cnn情况
    else return 2* xs(n-1, k) + 3* xs(n-1, k-1);// Cnk情况
}


int main(){
    int m, k;
    scanf("%d %d", &m, &k);
    printf("%d\n", xs(m,k));
}