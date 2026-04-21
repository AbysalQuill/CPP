#include<cstdio>
#include<cstdlib>
#include<cstring>
#define MAXSIZE 100
#define rep(i,l,r)for(int i=l;i<r;++i)
#define per(i,r,l)for(int i=r;i>=l;--i)
typedef struct{
    int id;
    long long isbn;
    char name[50];
    char author[50];
    double price;
}Book;

typedef struct{
    Book* data;
    int length;
}SqList;
void Init(SqList*& L){
    L=(SqList*)malloc(sizeof(SqList));
    L->data=(Book*)malloc(sizeof(Book)*MAXSIZE);
    L->length=0;
}
bool Destroy(SqList*& L){
    if(L){
        free(L->data);
        free(L);
        L=NULL;
    }
    return true;
}
bool Empty(SqList& L){
    return L.length==0;
}
int Length(SqList& L){
    return L.length;
}
void Print(SqList& L){
    rep(i,0,L.length)
        printf("%d\t%lld\t%s\t%s\t%.2f\n",L.data[i].id,L.data[i].isbn,L.data[i].name,L.data[i].author,L.data[i].price);
    
}
bool Get(SqList& L,int i,Book& e){
    if(i<1||i>L.length)return false;
    e=L.data[i-1];
    return true;
}
int Locate(SqList& L,long long isbn){
    rep(i,0,L.length){
        if(L.data[i].isbn==isbn)return i+1;
    }
    return 0;
}
bool Insert(SqList*& L,int i,Book& e){
    if(i<1||i>L->length+1)return false;
    if(L->length>=MAXSIZE)return false;
    per(j,L->length,i)L->data[j]=L->data[j-1];
    L->data[i-1]=e;
    L->data[i-1].id=i;
    L->length++;
    rep(j,i,L->length)L->data[j].id=j+1;
    return true;
}
bool Delete(SqList*& L,int i,Book& e){
    if(i<1||i>L->length)return false;
    e.id=L->data[i-1].id;
    e.isbn=L->data[i-1].isbn;
    strcpy(e.name,L->data[i-1].name);
    strcpy(e.author,L->data[i-1].author);
    e.price=L->data[i-1].price;
    rep(j,i,L->length)L->data[j-1]=L->data[j];
    L->length--;
    rep(j,i-1,L->length)L->data[j].id=j+1;
    return true;
}
int main(){
    printf("周月轩 20250203204\n");
    SqList* L;
    Book e;
    Init(L);
    Book b1={0,9787302334644,"数据结构","严蔚敏",35.00};
    Insert(L,1,b1);
    Book b2={0,9787111579626,"算法导论","Thomas H.Cormen",128.00};
    Insert(L,2,b2);
    Book b3={0,9787115477140,"C Primer Plus","StephenPrata",79.00};
    Insert(L,3,b3);
    printf("初始列表:\n");
    Print(*L);
    if(Get(*L,2,e)){
        printf("Get第2本:\n");
        printf("%d\t%lld\t%s\t%s\t%.2f\n",e.id,e.isbn,e.name,e.author,e.price);
    }
    long long targetisbn=9787111579626;
    int pos=Locate(*L,targetisbn);
    if(pos!=0){
        printf("LocateISBN=%lld:\n",targetisbn);
        Get(*L,pos,e);
        printf("位序:%d，信息:%d\t%lld\t%s\t%s\t%.2f\n",pos,e.id,e.isbn,e.name,e.author,e.price);
    }
    else printf("LocateISBN=%lld:\n未找到\n",targetisbn);
    Book newBook={0,9787302334644,"数据结构","严蔚敏",35.00};
    Insert(L,2,newBook);
    printf("插入后列表:\n");
    Print(*L);
    Delete(L,2,e);
    printf("删除的元素:\n");
    printf("%d\t%lld\t%s\t%s\t%.2f\n",e.id,e.isbn,e.name,e.author,e.price);
    printf("删除后列表:\n");
    Print(*L);
    Destroy(L);
    return 0;
}