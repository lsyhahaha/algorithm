/*
typedef struct {//定义队列的顺序存储结构
    Tree data[N];
    int front, rear;
}Queue;

bool EnQueue(Queue &Q, Tree x){
    if((Q.rear+1)%N==Q.front) return false; // 队满
    Q.data[Q.rear] = x;
    Q.rear=(Q.rear+1)%N;

    return true;
}

bool isEmpty(Queue Q){//判断队空
    if(Q.rear==Q.front) return true;
    return false;
}

bool DeQueue(Queue &Q, Tree &x){
    if (Q.rear==Q.front) return false; // 对空报错；
    x=Q.data[Q.front];
    Q.front=(Q.front+1)%N; //对头指针加1取模
    return true;
}*/
