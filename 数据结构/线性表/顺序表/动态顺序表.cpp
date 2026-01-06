#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXSIZE 100
typedef int ElemType;

// 定义动态线性表结构
typedef struct SqList{
    ElemType *data;
    int length;
    int maxsize;
}SqList;

// 初始化
void InitList(SqList *L){ 
    L->data=(ElemType *)malloc(MAXSIZE*sizeof(ElemType));
    L->length=0;
    L->maxsize=MAXSIZE;
}

// 判空
bool Empty(SqList *L){
    return L->length==0;
}

// 销毁
void DestoryList(SqList *L){ 
    free(L->data);
    L->data=NULL;
    L->length=L->maxsize=0;
}

// 按位查找
ElemType GetElem(SqList *L,int i){
    return L->data[i-1];
}

// 按值查找
int LocateElem(SqList *L,ElemType e){
    for (int i=0;i<L->length;i++){
        if (L->data[i]==e){
            return i+1;
        }
    }
    return 0;
}

// 获取长度
int Length(SqList *L){ 
    return L->length;
}

// 插入
bool Insert(SqList *L,int i,ElemType e){
    // 检查插入位置
    if (i<1||i>L->length+1){
        return false;
    }
    // 检查是否满
    if (L->length==L->maxsize){
        return false;
    }
    // 后移元素
    for (int j=L->length;j>=i;j--){
        L->data[j]=L->data[j-1];
    }
    L->data[i-1]=e;
    L->length++;
    return true;
}

// 删除
bool Delete(SqList *L,int i,ElemType *e){
    if (i<1||i>L->length){
        return false;
    }
    if (e == NULL){
        return false;
    }
    // 储存被删除元素
    *e=L->data[i-1];
    // 前移元素，覆盖被删除的位置
    for (int j=i;j<L->length;j++){
        L->data[j-1]=L->data[j];
    }
    // 表长减1
    L->length--;
    return true;
}

// 遍历
void Traverse(SqList *L){ 
    for (int i=0;i<L->length;i++){
        printf("%d ",L->data[i]);
    }
    printf("\n");
}

int main(){
    SqList L;
    InitList(&L);
    Insert(&L,1,1);
    Insert(&L,2,2);
    Insert(&L,3,3);
    Insert(&L,4,4);
    Insert(&L,5,5);
    printf("删除前的线性表：");
    Traverse(&L);
    // 定义用于存储被删除的元素
    ElemType e;
    Delete(&L,3,&e);
    printf("删除后的线性表：");
    Traverse(&L);
    printf("被删除的元素值：%d\n",e);
    DestoryList(&L);
    return 0;
}