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

bool ListTailInsert(LinkList &L)
{
    ElemType x;
    LinkList s,r=L;
    while(scanf("%d",&x)) // 读取整数，直到输入结束
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        if(getchar()=='\n') break;  // 检测到换行符则退出
    }
    r->next=NULL;
    return true;
}

int main()
{
    LinkList L;
    InitList(L);
    ListTailInsert(L);
    for (LinkList p=L->next;p!=NULL;p=p->next)
        printf("%d ",p->data);
    return 0;
}