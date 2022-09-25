//
// Created by 98708 on 2022/9/19.
//

// 统计字符串中各个字符出现的频率
#include <stdio.h>
#include <stdlib.h>

void CoutChar(char* S, int n){
    // 参数说明：字符串S的长度为n
    int cout[100][2] = {{0, 0}};
    char words[26] = {0};                   //哈希存储，words[i]表示 ‘a’+i出现的次数
    for (int i = 0; i < n; i++){
        int j = S[i] - 'a';                 // j为S[i]应该存储位置的索引
        words[j]++;                         // 扫描到了j，加1
    }
    for (int i = 0; i < 26; i++){
        if (words[i] != 0){
            printf("%c出现了%d次。\n", 'a'+i, words[i]);
        }
    }
}

int main(){
    CoutChar("aaadddcccdaaee", 14);
    return 0;
}