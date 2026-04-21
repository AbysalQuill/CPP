#include <cstdio>
#include <cstdlib>
typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
} LNode,*LinkList;
//对于传引用，也可写成二级指针即struct LNode **L
bool InitList(LinkList &L){ //传引用头结点
	L=(LNode*)malloc(sizeof(LNode));
	L->data=0; // 初始化头结点数据
	L->next=NULL;
	return true;
}
int Lenth(LinkList L){
	int len=0;
	while(L->next!=NULL) {
		len++;
		L=L->next;
	}
	return len;
}
LNode* GetElem(LinkList L,int i) {
	LNode* p=L;
	int j=0; //记录当前节点位序
	while(p!=NULL&&j<i) { //找到第i个节点
		p=p->next;
		j++;
	}
	return p;
}
LNode* LocateElem(LinkList L,ElemType e) {
	LNode* p=L;
	while(p!=NULL&&p->data!=e) p=p->next;
	return p;
}
LinkList ListInsert(LinkList L,ElemType e)//头插法
{
    LNode *s=(LNode*)malloc(sizeof(LNode));
    s->data=e;
    s->next=L->next;
    L->next=s;
    return L;
}
bool ListDelete(LinkList &L,int i,ElemType &e) {
	LNode* p=L;
	int j=0; //记录当前节点位序
	while(p->next!=NULL&&j<i-1) { //找到第i-1个节点
		p=p->next;
		j++;
	}
	if(p->next==NULL) return false;
	LNode* q=p->next;
	e=q->data;
	p->next=q->next;
	free(q);
	return true;
}

void PrintList(LinkList L) {
	LNode* p=L->next;
	while(p!=NULL) {
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

void DestroyList(LinkList &L) {
	LNode* p=L;
	while(p!=NULL){
		LNode* q=p->next;
		free(p);
		p=q;
	}
}

int main() {
	printf("周月轩20250203204\n");
	LinkList L;
	InitList(L);
	printf("链表初始化成功\n");
	printf("输入节点个数");
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;++i){
		printf("输入：");
		ElemType e;
		scanf("%d",&e);
		ListInsert(L,e);
	}
	printf("输入后：");
	PrintList(L);
	printf("输入删除哪个位置的元素：");
	int pos;
	scanf("%d",&pos);
	ElemType e;
	ListDelete(L,pos,e);
	printf("删除的元素：");
	printf("%d\n",e);
	printf("删除后元素：");
	PrintList(L);
	return 0;
}