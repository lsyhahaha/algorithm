//
// Created by 98708 on 2022/7/26.
//
#include <stdlib.h>
#include <time.h>
#include "stdio.h"
#include "math.h"
#define MAXSIZE 100
int ax[MAXSIZE];
int ay[MAXSIZE];


double Area(int i, int j, int k);
double powi(int i);

void maxArea(){
    int max_area = 0;
    for (int i = 0; i < MAXSIZE; i++) {
        for (int j = 1; j < MAXSIZE; j++) {
            for (int k = 0; k < MAXSIZE; k++) {
                max_area = fmax(max_area, Area(i, j, k));
            }
        }
    }

    printf("%f\n", max_area);
}

double Area(int i, int j, int k) {
    double a = sqrt( powi(ax[i] - ay[j]) + powi(ax[j] - ay[j]));
    double b = sqrt( powi(ax[i] - ay[k]) + powi(ax[j] - ay[k]));
    double c = sqrt( powi(ax[j] - ay[k]) + powi(ax[j] - ay[k]));
    double s = (a+b+c)/2;

    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double powi(int i) {
    return i*i;
}

int main(){
    for (int i = 0; i<MAXSIZE; i++) {
        srand((unsigned)time(NULL));   //用时间作种子
        ax[i] = rand();
        ay[i] = rand();
        printf("ax[%d] = %f, ax[%d] = %f\n", i, ax[i], i, ax[i]);
    }
    maxArea();
    return 0;
}