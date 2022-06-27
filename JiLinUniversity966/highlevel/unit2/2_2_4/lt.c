//
// Created by 98708 on 2022/6/28.
//

// 用c语言将一个正数分解质因数
#include <stdio.h>

int main(){
    /*思路:
     * */
    int n;
    scanf("%d", &n);
    printf("%d=", n);

    for (int i = 2; i<n; i++) {
        while(i!=n){
            // 直到除到除数为n
            // 如果n能一直整除i,就会一直除
            if (n%i == 0) {
                n=n/i;
                printf("%d*", i);
            }else{
                break;
            }
        }
//        if(i!=n){
//            // 直到除到除数为n
//            if (n%i == 0) {
//                n = n / i;
//                printf("%d*", i);
//            }
//        }
    }
    printf("%d\n", n);

    return 0;
}















//******  错误思路*****  错误思路*  错误思路  错误思路  错误思路  错误思路  错误思路  错误思路

//#include <stdio.h>
//#include <math.h>
//
//int isPrem(int n);
//
//int main(){
//    /*思路:  ①输入一个正数;
//     *      ②分解质因数,主要解决打印格式
//     * */
//    int n;
//    printf("请输入一个正整数:\n");
//    scanf("%d", &n);
//
//    printf("%d=", n);
//    int a = n;
//    for (int i = 1; i < n; i++) {
//        if (a%i == 0 && isPrem(i) == 1) {
//            if (a == i) {
//                printf("%d", i);
//                return 0;
//            }
//            printf("%d*", i);
//            a = a/i;
//        }
//    }
//
//    return 0;
//}
//
//int isPrem(int n) {
//    // 判断一个数是否为素数
//    for (int i = 2; i < sqrt(n); i++) {
//        if (n%i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
