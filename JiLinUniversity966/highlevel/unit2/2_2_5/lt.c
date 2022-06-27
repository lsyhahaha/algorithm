//
// Created by 98708 on 2022/6/28.
//

// 2.5 编写一个函数,判断是否为完全平方数

#include<stdio.h>

int main(){
    /*思路:  ①输入
     *      ② 遍历(0, n)
     * */
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        if (i*i == n) {
            printf("%d是一个完全平方数", n);
            return 1;
        }
    }
    printf("%d不是一个完全平方数", n);

    return 0;
}