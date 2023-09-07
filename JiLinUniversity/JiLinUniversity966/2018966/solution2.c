//
// Created by 98708 on 2022/7/26.
//

#include "stdlib.h"
#include "stdio.h"

double fun(int n){
    if (n == 1) return 1;
    return fun(n-1) * n;
}

double fac(int n){
    if (n == 0) return 0;
    if (n == 1) return 1/(2* fun(3));

    return fac(n-1) + n/((n+1)*fun(n+2));
}

int main(){
    int n;
    double ans = 0;
    printf("请输入n：");
    scanf("%d", &n);
    ans = fac(n);
    printf("f(%d) = %lf", n, ans);
    return 0;
}