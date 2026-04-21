#include<cstdio>
#include<cstdlib>
#include<cstring>
typedef int ElemType;
#define MaxSize 100
#define rep(i,l,r)for(int i=l;i<r;++i)
#define per(i,r,l)for(int i=r;i>=l;--i)

typedef struct{
    ElemType data[MaxSize];
    int front,count;
} SqQueue;

void Init(SqQueue *&Q){
    Q=(SqQueue*)malloc(sizeof(SqQueue));
    Q->front=0;
    Q->count=0;
}

bool Empty(SqQueue *Q){
    return Q->count==0;
}

bool EnQueue(SqQueue *Q,ElemType x){
    if (Q->count==MaxSize) return false;
    int rear=(Q->front+Q->count)%MaxSize;
    Q->data[rear]=x;
    Q->count++;
    return true;
}

bool Dequeue(SqQueue *Q,ElemType &x){
    if (Empty(Q)) return false;
    x=Q->data[Q->front];
    Q->front=(Q->front+1)%MaxSize;
    Q->count--;
    return true;
}

void Print(SqQueue *Q){
    rep(i,0,Q->count){
        int idx=(Q->front+i)%MaxSize;
        printf("%d ",Q->data[idx]);
    }
    printf("\n");
}

int main(){
    printf("周月轩20250203204\n");
    SqQueue *Q;
    Init(Q);
    printf("初始化成功\n");
    if (Empty(Q)) printf("队列为空\n");
    else printf("队列不为空\n");
    printf("入队：");
    EnQueue(Q,1);
    EnQueue(Q,2);
    EnQueue(Q,3);
    Print(Q);
    printf("出队：");
    ElemType x;
    Dequeue(Q,x);
    printf("%d ",x);
    Print(Q);
    printf("队列是否为空：%d\n",Empty(Q));
    return 0;
}