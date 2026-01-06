#include <cstdio>
#include <cstdlib>
typedef int ElemType;  // 修改为int类型，以处理数字输入
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

bool ListTailInsert(LinkList &L){
    ElemType x;
    while (scanf("%d",&x)){
        LNode *s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        if (getchar()=='\n') break;
    }
    return true;
}

void PrintList(LinkList L)
{
    LNode *p=L->next;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    LinkList L;
    InitList(L);
    ListTailInsert(L);
    PrintList(L);
    return 0;
}

