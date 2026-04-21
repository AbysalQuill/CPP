#include <cstdio>
#include <cstdlib>
#define rep(i,l,r) for(int i=l;i<=r++i)
typedef char ElementType;
typedef struct LinkNode{
    ElementType data;
    struct LinkNode *next;
}LinkStNode;
//初始化栈
void InitStack(LinkStNode *&S){
    S=(LinkStNode *)malloc(sizeof(LinkStNode));
    S->next=NULL;
}
//判断栈是否为空
bool StackEmpty(LinkStNode *S){
    return S->next==NULL;
}
//入栈
bool Push(LinkStNode *&S,ElementType e){
    LinkStNode *s=(LinkStNode *)malloc(sizeof(LinkStNode));
    s->data=e;
    s->next=S->next;
    S->next=s;
    return true;
}
//弹出栈顶元素
bool Pop(LinkStNode *&S,ElementType &e){
    if(S->next==NULL) return false;
    LinkStNode *p=S->next;
    e=p->data;
    S->next=p->next;
    free(p);
    return true;
}
//获取栈顶元素
bool GetTop(LinkStNode *S,ElementType &e){
    if(S->next==NULL) return false;
    e=S->next->data;
    return true;
}

//销毁栈，释放内存
bool DestroyStack(LinkStNode *&S){
    LinkStNode *p=S->next;
    while(p!=NULL){
        LinkStNode *q=p->next;
        free(p);
        p=q;
    }
    S->next=NULL;
    return true;
}

//输出a->b->c->d->e，需要打印一个删除一个元素，最后栈为空
void PrintStack(LinkStNode *S){
    LinkStNode *p=S->next;
    while(p!=NULL){
        printf("%c ",p->data);
        Pop(S,p->data);
        p=p->next;
    }
    printf("\n");
}

int main(){
    printf("周月轩 20250203204\n");

    LinkStNode *S;
    InitStack(S);
    printf("初始化成功\n");
    if (StackEmpty(S)) printf("栈为空\n");
    else printf("栈不为空\n");
    Push(S,'a');
    Push(S,'b');
    Push(S,'c');
    Push(S,'d'); 
    Push(S,'e');
    printf("a,b,c,d,e入栈后\n");
    if (StackEmpty(S)) printf("栈为空\n");
    else printf("栈不为空\n");
    PrintStack(S);
    printf("元素出栈后\n");
    if (StackEmpty(S)) printf("栈为空\n");
    else printf("栈不为空\n");
    DestroyStack(S);
    return 0;
}
