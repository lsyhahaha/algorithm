//
// Created by 98708 on 2022/7/27.
//
#include <stdbool.h>
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

typedef struct LNode{
    int val;
    struct LNode *next;
}* List;

bool isPrime(int val);

List delPrime(List L){
    List head = (List)malloc(sizeof (struct LNode));
    List p = head;
    while (L != NULL) {
        if (isPrime(L->val)) {
            p->next = L->next;
            L = p->next;
        }else{
            p = L; // 指针后移
            L = L->next;
        }
    }
    return head->next;
}

bool isPrime(int val) {
    for (int i = 2; i < sqrt(val); i++) {
        if (val%i == 0) return 0;
    }
    return 1;
}
