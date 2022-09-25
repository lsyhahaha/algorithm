/*
 * 角谷猜想：
任给一个大于0的正整数n，按照如下规则（角谷变换）对其计算：
·如果n为偶数，则将其除以2，即n/2
·如果n为奇数，则将其乘以3再加1，即3*n+1
将得到的新数字不断重复上述变换规则，若干次后一定可以得到1。
请编写程序，输入一个大于0的正整数n，输出该数经过多少次角谷变换达到1。
*/

/*算法思想：
 * ①输入一个正整数n；在while循环中判断n为奇数还是偶数，进行对应的变换；
 * ②while循环结束条件为n==1;
 * ③用count记录变换次数；
 * */

#include "stdio.h"
#include "stdlib.h"

void JiaoGu(int n){
    int cout = 0;
    int N = n;
    while(n!=1){
        if(n%2==0){
            n = n/2;
        }else{
            n = 3*n+1;
        }
        cout++;
    }
    printf("%d change %d 次",N, cout);
}

int main(){
    JiaoGu(100);
    return 0;
}