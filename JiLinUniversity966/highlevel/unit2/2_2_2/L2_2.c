//
// Created by 98708 on 2022/6/28.
//

//编写一个程序,输入一个正整数,求他们的约束和

#include <stdio.h>

int main(){
    /*思路:  ① 输入一个正整数
     *      ② 如果取模为0,表示能整除,为约束,则加在sum上
     * */
    int n;
    printf("请输入一个正整数:\n");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++){
        if (n%i == 0) {
            sum += i;
        }
    }
    printf("%d的约束和为%d", n, sum);

    return 0;
}