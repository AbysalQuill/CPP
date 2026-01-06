#include <cstdio>
#include <cstdlib>
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;
//对于传引用，也可写成二级指针即struct LNode **L
bool InitList(LinkList &L)//传引用头结点
{
    L=(LNode*)malloc(sizeof(LNode));
    L->data=0;  // 初始化头结点数据
    L->next=NULL;
    return true;
}

int Length(LinkList L){
    int len=0;
    LNode *p=L->next;
    while (!L)
    {
        len++;
        p=p->next;
    }
    return len;
}

LNode *GetElem(LinkList L,int i){
    int j=1;
    LNode *p=L;
    if(i<1)
        return NULL;
    while (p&&j<i)
    {
        p=p->next;
        j++;
    }
    return p;
}

int LocateElem(LinkList L,ElemType e){
    int i=1;
    LNode *p=L->next;
    while (p&&p->data!=e)
    {
        p=p->next;
        i++;
    }
    if(!p)
        return 0;
    return i;
}

bool ListInsert(LinkList &L,int i,ElemType e){
    int j=1;
    LNode *p=L,*s;
    if(i<1)
        return false;
    while (p&&j<i)
    {
        p=p->next;
        j++;
    }
    if(!p)
        return false;
    s=(LNode*)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}

bool ListDelete(LinkList &L,int i,ElemType &e){
    int j=1;
    LNode *p=L,*q;
    if(i<1)
        return false;
    while (p&&j<i)
    {
        p=p->next;
        j++;
    }
    if(!p)
        return false;
    q=p->next;
    e=q->data;
    p->next=q->next;
    free(q);
    return true;
}

void PrintList(LinkList L){
    LNode *p=L->next;
    while (p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    LinkList L;
    InitList(L);
    ListInsert(L,1,1);
    ListInsert(L,2,2);
    ListInsert(L,3,3);
    ListInsert(L,4,4);
    ListInsert(L,5,5);
    PrintList(L);
    ElemType e;
    ListDelete(L,3,e);
    PrintList(L); 
}