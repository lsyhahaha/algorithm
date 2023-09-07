//
// Created by 98708 on 2022/9/22.
//

/*����һ������ͷ����˫������L��ÿ�������4�����ݳ�Ա��ǰ������ָ��LLink,��̽���ָ��RLink,���ݵĳ�ԱData,
 * �ͷ���Ƶ��Freq;����֪˫������L�н��һֱ������Ƶ�ȵݼ���˳�����С���Ƶ�����ʵĽ�����ǿ�����ͷ����ʼ״̬L����
 * �н���Freq��Ϊ0.
 ��˫����L��Locate(x)������ÿ����һ�Σ�������ֵΪx�Ľ�����Ƶ��Freq��1�������һ���㷨ʵ�ֶ�˫����L��Locate(x)
 ������Ҫ�������L�н���԰��շ���Ƶ�ȵĵݼ�˳������.
 */

/*�㷨˼�룺
 * �������ҵ�����ֵΪx�Ľ�㣬�޸������Ƶ�ȣ�
 * ���ٶ�˫���ı�����*/

#include "bits/stdc++.h"

typedef struct Node{ /*����˫������Ĵ洢�ṹ*/
    int data;
    int freq;
    struct Node *LLink, *RLink;
}Node, *LNode;

void Locate(LNode head, int x){
    if (head->RLink == NULL) return; /*���˫������Ϊ�գ�ֱ���˳�*/
    LNode cur = head->RLink; //curȥ��������
    while(cur != NULL){
        if (cur->data == x){ // �޸ķ���Ƶ��
            cur->freq++;
        }
        cur = cur->RLink;
    }

    /*��Ϊ˫�������շ���Ƶ���������У����Դ�cur��ʼ��ǰ�������ҵ���cur.freq���ֵ�����򽻻�ֵ�����µ�freq��ǰð��*/
    while(1){
        if (cur->LLink == head) break; // �޸ĺ��Ƶ�������֪ð�ݵ���ͷ�ڵ����һλ
        int temp = 0;
        if (cur->LLink->freq < cur->freq){ // ��ǰð��
            temp = cur->freq;
            cur->freq = cur->LLink->freq;
            cur->LLink->freq = temp;
        }else{ // �����ȸýڵ����Ƶ�ȴ�Ľ�㣬ֹͣð��
            break;
        }
    }
}