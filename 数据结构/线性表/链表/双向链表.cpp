#include <cstdio>
#include <cstdlib>
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *prev;  // 前驱指针
    struct LNode *next;  // 后继指针
} LNode,*LinkList;
// 初始化双向链表
// 传引用：LinkList &L 等价于二级指针 struct LNode **L
bool InitList(LinkList &L)
{
    L=(LNode*)malloc(sizeof(LNode));
    if(L==NULL) return false;  // 内存分配失败
    L->data=0;   // 头结点数据域
    L->prev=NULL; // 头结点前驱指针为空
    L->next=NULL; // 头结点后继指针为空
    return true;
}
int Length(LinkList L)
{
    int len=0;
    LNode* p=L->next;  // 从第一个有效节点开始遍历
    while(p!=NULL)    // 遍历至链表尾
    {
        len++;
        p=p->next;
    }
    return len;
}

// 按位查找
LNode* GetElem(LinkList L,int i)
{
    LNode* p=L;
    int j=0; // 记录当前节点位序
    while(p!=NULL&&j<i) // 找到第i个节点
    {
        p=p->next;
        j++;
    }
    return p;
}

// 按值查找
LNode* LocateElem(LinkList L,ElemType e)
{
    LNode* p=L->next; // 从第一个有效节点开始查找
    while(p!=NULL&&p->data!=e) 
        p=p->next;
    return p;
}

// 定点插入
bool ListInsert(LinkList &L,int i,ElemType e)
{
    LNode* p=L;
    int j=0; // 记录当前节点位序（头结点j=0）
    // 找到第i-1个节点（插入位置的前驱节点）
    while(p!=NULL&&j<i-1)
    {
        p=p->next;
        j++;
    } 
    if(p==NULL) return false; // 插入位置不合法
    // 创建新节点
    LNode* s=(LNode*)malloc(sizeof(LNode));
    if(s==NULL) return false;
    s->data=e;

    // 调整双向链表指针
    s->next=p->next;  // 1. 新节点后继指向原i位置节点
    if(p->next!=NULL) // 若插入位置不是链表尾，需设置前驱
        p->next->prev=s; // 2. 原i位置节点的前驱指向新节点
    s->prev=p;        // 3. 新节点前驱指向第i-1个节点
    p->next=s;        // 4. 第i-1个节点的后继指向新节点

    return true;
}

// 定点删除
bool ListDelete(LinkList &L,int i,ElemType &e)
{
    LNode* p=L;
    int j=0; // 记录当前节点位序
    // 找到第i-1个节点
    while(p->next!=NULL&&j<i-1)
    {
        p=p->next;
        j++;
    }
    // 合法性
    if(p==NULL) return false;
    LNode* q=p->next; // q指向待删除的第i个节点
    e=q->data;        // 保存删除节点的值
    // 调整双向链表指针
    p->next=q->next;  // 1. 前驱节点后继指向删除节点的后继
    if(q->next!=NULL) // 若删除的不是尾节点，需设置前驱
        q->next->prev=p; // 2. 后继节点前驱指向删除节点的前驱
    q->prev=NULL;     // 3. 清空删除节点的前驱（可选，规范操作）

    free(q); // 释放删除节点的内存
    return true;
}
void PrintList(LinkList L)
{
    LNode* p=L->next; // 从第一个有效节点开始
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
// 反向打印双向链表
void PrintListReverse(LinkList L)
{
    LNode* p=L;
    while(p->next!=NULL)
        p=p->next;
    while(p!=L)
    {
        printf("%d ",p->data);
        p=p->prev;
    }
    printf("\n");
}
// 销毁双向链表
void DestroyList(LinkList &L)
{
    LNode* p=L;
    while(p!=NULL)
    {
        free(p);
        p=p->next;
    }
    L=NULL; // 清空头指针
}
int main()
{
    LinkList L;
    InitList(L);
    ListInsert(L,1,1);
    ListInsert(L,2,2);
    ListInsert(L,3,3);
    ListInsert(L,4,4);
    ListInsert(L,5,5);
    printf("正向打印链表：");
    PrintList(L);
    ElemType e;
    ListDelete(L,2,e)
    printf("删除的节点值：%d\n",e);
    printf("删除后正向打印：");
    PrintList(L);
    printf("删除后反向打印：");
    PrintListReverse(L);
    DestroyList(L);
    return 0;
}