//
// Created by 98708 on 2022/6/28.
//

// 2.6 输入所有三位数中,既是完全平方数,又有两个数字相同的数

#include<stdio.h>
#include<math.h>

int isWanQuan(int i);
int twoSam(int i);

int main(){
    /*思路: 首先判断是否为完全平方数,在判断是否有两个数字相同
     * */
    for (int i = 100; i <= 999; i++) {
        if (isWanQuan(i) == 1 && twoSam(i) == 1) {
            printf("%d ", i);
        }
    }


    return 0;
}

int twoSam(int n) {
    int a = n / 100;
    int b = (n%100)/10;
    int c = n % 10;
    if (a == b || a == c || b == c) return 1;

    return 0;
}

int isWanQuan(int n) {
    for (int i = 0; i <= n; i++) {
        if (i*i == n) {
            return 1;
        }
    }
    return 0;
}
