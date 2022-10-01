//
// Created by 98708 on 2022/10/1.
//

/*编写递归函数，计算一个非负整数的所有组成数字的和，例如，对于整数122，其
 * 所有组成数字为1，2，2，所以和为5*/

/*算法思想：
 * 每一次将数字对10取模，得到个位，然后整除10，直到数为0*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}