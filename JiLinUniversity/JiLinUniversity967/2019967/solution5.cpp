//
// Created by 98708 on 2022/9/25.
//

/*程序设计题3：
 * 设计一个函数判断m和n是否是友好的，返回布尔类型，若m的约数和等于n，n的约数和等于m，
 * 则二者友好，约数和不包括本身的所有约数之和。*/

#include<stdio.h>

int ysh(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    int m = 100,n =90;
    if(ysh(m)==n&&ysh(n)==m){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}