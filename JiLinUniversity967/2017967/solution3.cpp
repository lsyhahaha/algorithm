//
// Created by 98708 on 2022/9/21.
//

/*编写程序，输入整数k(k>7)，输出小于k且必须至少满足如下两个条件之一的所有正整数：
·该正整数是7的倍数
·组成该正整数的数字中有7
例如k=30，输出结果为：7，14，17，21，27，28
注意：整数的按位判断
 */

/*算法思想：
 * ①接受k，循环判断所有在（0，k）之间，符合条件的数
 * ②判断是否是7的倍数：n%7==0
 * ③将每个数字按照数位，判断是否含有7（每次取10的模，不是7则除以10继续判断，直到为0）
 * */

#include "stdio.h"

bool IsTrue(int k){
    for (int i = 7; i < k; i++){ // 第一数字为7故直接从7开始
        if (i%7==0) return true; // 如果是7的倍数
        int x = i;
        while(x!=0){
            if (x%10 == 7) return true;
            x /= 10;
        }
    }

    return false;
}