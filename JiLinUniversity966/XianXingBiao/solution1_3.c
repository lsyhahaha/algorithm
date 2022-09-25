//
// Created by 98708 on 2022/9/11.
//
#include "stdlib.h"
#include "stdio.h"

void deleteX(int *arr,int n,int len) {
	int k = 0,i=0;//进行计数
	while (i<len) {
		if (*(arr+i)==n) {
			k++;
		}
		else {
			*(arr +i- k) = *(arr + i);
		}
		i++;
	}
	for (int i = 0; i < len-k; i++) {
		printf("%d ", *(arr + i));
	}
}

int main(){
    int arr[6] = {1, 2, 3, 4, 3, 5};
    int len = sizeof(arr)/sizeof(int);
    deleteX(arr, 3, len);
}