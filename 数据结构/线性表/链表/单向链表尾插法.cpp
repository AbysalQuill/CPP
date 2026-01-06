#include <cstdio>
#include <cstdlib>
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode,*LinkList;

//对于传引用，也可写成二级指针即struct LNode **L
bool InitList(LinkList &L)//传引用头结点
{
    L=(LNode*)malloc(sizeof(LNode));
    L->data=0;  // 初始化头结点数据
    L->next=NULL;
    return true;
}

LinkList ListTailInsert(LinkList L,ElemType x)
{
    LinkList s,r=L;
    s=(LNode*)malloc(sizeof(LNode));
    s->data=x;
    s->next=NULL;
    // 找到最后一个节点
    while(r->next!=NULL){
        r=r->next;
    }
    r->next=s;
    return L;
}

int main()
{
    LinkList L;
    InitList(L);
    ListTailInsert(L,1);
    ListTailInsert(L,2);
    ListTailInsert(L,3);
    ListTailInsert(L,4);
    ListTailInsert(L,5);
    for(LinkList p=L->next;p!=NULL;p=p->next)
        printf("%d ",p->data);
    return 0;
}