//
// Created by 98708 on 2022/9/19.
//

//一个长度为n的非负整型双向队列的“加权和”
/*
 * 算法思路：
 * ①双向队列采用顺序存储，保存在数组A中，设置执政fron和tail分别指向表头和表尾；
 * ②sum记录加权和，每次从对头或者队尾中取出较小的那个数， 用t记录权重
 * */
#include<stdio.h>
#define N 10

int MaxSum(){// 计算双端队列最大加权和
    int A[N] = {1,2,31,23,23,13,31,32,31,31}; // 数组模拟双端队列
    int n = 10, t = 1; // 队长 n, 权重t
    int front = 0, tail = n-1; //分别指向队头和队尾
    int sum = 0;
    while(front <= tail){
        if (A[front++] <= A[tail]){//如果队头更小，则从对头取出
            sum += A[front] * t++;
        }else if (A[front] <= A[tail--]){
            sum += A[tail] * t++;
        }
    }
    printf("result = %d", sum);
}