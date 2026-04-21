#include<cstdio>
#include<cstdlib>
#include<cstring>
#define MAXSIZE 100
#define rep(i,l,r)for(int i=l;i<r;++i)
#define per(i,r,l)for(int i=r;i>=l;--i)
typedef struct{
    int data[MAXSIZE];
    int length;
}SqList;
void Init(SqList*& L){
    L=(SqList*)malloc(sizeof(SqList));
    L->length=0;
}
void DelNode(SqList*& L,int x){
    int k=0;
    rep(i,0,L->length)
        if(L->data[i]!=x)L->data[k++]=L->data[i];
    L->length=k;
}
int main(){
    SqList* L;
    Init(L);
    int n,x;
    scanf("%d",&n);
    rep(i,0,n) scanf("%d",&L->data[i]);
    printf("删除前：");
    rep(i,0,n)printf("%d ",L->data[i]);
    L->length=n;
    scanf("%d",&x);
    DelNode(L,x);
    printf("\n删除后：");
    rep(i,0,L->length)printf("%d ",L->data[i]);
    return 0;
}