//
// Created by 98708 on 2022/6/28.
//

// 2.3变成找出1000以内的所有完数 (一个数恰好等于它的因子之和)

#include <stdio.h>

int isWanShu(int n);

int main(){
    /*思路:  ① 判断是否为完数
     *      ② 遍历
     * */
    int count = 1;
    for (int i = 1; i <= 1000; i++){
        if (isWanShu(i) == 1) {
            printf("%d ", i);
            count++;
        }
        if (count%5 == 0) {
            printf("\n");
        }
    }

    return 0;
}

int isWanShu(int n) {
    // 判断是否是完数
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n%i == 0) {
            sum += i;
        }
    }
    if (sum == n) return 1;

    return 0;
}
