//
// Created by 98708 on 2022/6/27.
//

/*
 * 1: Clang-Tidy: 'scanf' used to convert a string to an integer value, but function will not
 * report conversion errors; consider using 'strtol' instead
 *  答案：学习的时候都是使用cin或者scanf接受输入的数据，不知道为什么现在会有这种警告。网上搜了好像也没看懂。
 *
 * 2: ch = getchar();
 *  getchar和putchar不同，getchar是没有输入参数的。
 *  getchar只能接受一个字符
 * */

// 1.1 include 的应用指导 和输入输出
#include<stdio.h>

int main(){
//    // 输出函数printf、puts、putchar
//    // 整型（整型，布尔型，字符型，枚举型） 和 浮点型输出方式
//    printf("%d\t%d\n", 1,2);  // 输出整数 %d
//    printf("%f\n", 2.21);   // 输出小数 %f
//    printf("%.2f\n", 2.21);
//    printf("%.1f\n", 2.29); // 打印一位小数，四舍五入
//    // 字符类型
//    printf("%c\n", 'a'); // 输出一个字符 %c
//    putchar('a'); // 输出一个字符
//    printf("\n");
//    // 字符串类型
//    printf("%s\n", "add"); // 输出一个字符串 %s
//    puts("add"); // 输出字符串
//    printf("\n");
//
//    // 输入函数 scanf gets getchar
//    int a = 0;
//    scanf("%d", &a);
//    printf("a = %d\n", a);

//    char ch = 'z';
////    scanf("%c", &ch);
//    ch = getchar();
//    printf("ch = %c", ch);

//    char chs[10] = {'1', '2', '3'};
//    gets(chs);
//    printf("chs = %s\n", chs);
//    puts(chs);

    printf("冲进吉大!\n");
    return 0;
}