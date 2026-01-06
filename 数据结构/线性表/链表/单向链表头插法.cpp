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
    L->data = 0;  // 初始化头结点数据
    L->next=NULL;
    return true;
}

LinkList ListInsert(LinkList L,ElemType e)//头插法
{
    LNode *s=(LNode*)malloc(sizeof(LNode));
    s->data=e;
    s->next=L->next;
    L->next=s;
    return L;
}

int main()
{
    LinkList L;
    InitList(L);
    ListInsert(L,1);
    ListInsert(L,2);
    ListInsert(L,3);
    ListInsert(L,4);
    ListInsert(L,5);
    ListInsert(L,6);
    ListInsert(L,7);
    ListInsert(L,8);
    ListInsert(L,9);
    for (LNode *p=L->next;p!=NULL;p=p->next) 
        printf("%d ",p->data);
}
