//
// Created by 98708 on 2022/7/27.
//

#include "stdio.h"
#include "stdlib.h"

int gcb(int a, int b){
    if (a % b == 0) {
        return b;
    }

    return gcb(b, a%b);
}

int main(){
    int a = 100, b = 9;
    printf("%d", gcb(a, b));

    return 0;
}