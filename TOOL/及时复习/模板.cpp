/*
typedef struct {//������е�˳��洢�ṹ
    Tree data[N];
    int front, rear;
}Queue;

bool EnQueue(Queue &Q, Tree x){
    if((Q.rear+1)%N==Q.front) return false; // ����
    Q.data[Q.rear] = x;
    Q.rear=(Q.rear+1)%N;

    return true;
}

bool isEmpty(Queue Q){//�ж϶ӿ�
    if(Q.rear==Q.front) return true;
    return false;
}

bool DeQueue(Queue &Q, Tree &x){
    if (Q.rear==Q.front) return false; // �Կձ���
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%N; //��ͷָ���1ȡģ
    return true;
}*/
