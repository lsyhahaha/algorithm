//
// Created by 98708 on 2022/7/27.
//

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

double sin(double x){
    int n = 1;
    double temp = x, sum = 0;
    while (temp > 1e-5){
        sum+=temp;
        temp*= -1*x*x/(2*n*(2*n+1));
        n++;
    }
    return sum;
}

int main(){
    printf("%f", sin(3.1415));
}