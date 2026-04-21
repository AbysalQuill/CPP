#include <cstdio>
#include <cstdlib>
#include <cstring>
#define MAXSIZE 100
#define rep(i,l,r) for(int i=l;i<r;++i)
#define per(i,r,l) for(int i=r;i>=l;--i)

typedef struct{
    int id;
    long long isbn;
    char name[50];
    char author[50];
    double price;
}Book;

typedef struct{
    Book *data;
    int length;
}SqList;

// 初始化顺序表（支持含空格的作者名）
void Init(SqList *&L,int n){
    L=(SqList*)malloc(sizeof(SqList));
    L->data=(Book*)malloc(sizeof(Book)*MAXSIZE);
    L->length=n;
    char buf[100];
    rep(i,0,n){
        L->data[i].id = i+1;
        scanf("%lld", &L->data[i].isbn);
        getchar(); // 消耗换行符
        fgets(L->data[i].name, 50, stdin);
        L->data[i].name[strcspn(L->data[i].name, "\n")] = 0; // 去除换行
        fgets(buf, 100, stdin);
        buf[strcspn(buf, "\n")] = 0;
        char *p = strrchr(buf, ' '); // 从后往前找最后一个空格，分割作者和价格
        if(p){
            *p = '\0';
            strcpy(L->data[i].author, buf);
            sscanf(p+1, "%lf", &L->data[i].price);
        }
    }
}

// 销毁顺序表
bool Destroy(SqList *&L){
    if(L){
        free(L->data);
        free(L);
        L=NULL;
    }
    return true;
}

// 判断是否为空
bool Empty(SqList &L){
    return L.length==0;
}

// 获取长度
int Length(SqList &L){
    return L.length;
}

// 打印所有元素
void Print(SqList &L){
    rep(i,0,L.length){
        printf("%d\t%lld\t%s\t%s\t%.2f\n",L.data[i].id,L.data[i].isbn,L.data[i].name,L.data[i].author,L.data[i].price);
    }
}

// 按位序获取元素（i 为位序，1~length）
bool Get(SqList &L,int i,Book &e){
    if (i<1||i>L.length) return false;
    e=L.data[i-1];
    return true;
}

// ✅ 修复 Locate：按 ISBN 查找元素，返回位序 i
int Locate(SqList &L,long long isbn){
    rep(i,0,L.length){
        if (L.data[i].isbn == isbn){
            return i+1; // 位序从 1 开始
        }
    }
    return 0; // 未找到返回 0
}

// 插入元素（i 为插入位置，1~length+1）
bool Insert(SqList &L,int i,Book &e){
    if (i<1||i>L.length+1) return false;
    if (L.length>=MAXSIZE) return false;
    per(j,L.length,i) L.data[j]=L.data[j-1]; // 后移元素
    L.data[i-1]=e;
    L.length++;
    rep(j,0,L.length) L.data[j].id = j+1; // 统一更新所有 id
    return true;
}

// 删除元素（i 为删除位置，1~length）
bool Delete(SqList &L,int i,Book &e){
    if (i<1||i>L.length) return false;
    e=L.data[i-1];
    rep(j,i,L.length) L.data[j-1]=L.data[j]; // 前移元素
    L.length--;
    rep(j,0,L.length) L.data[j].id = j+1; // 统一更新所有 id
    return true;
}

int main(){
    SqList *L;
    Book e; 
    // 初始化 3 本图书
    Init(L,3);
    printf("=== 初始列表 ===\n");
    Print(*L);

    // 测试 Get：获取第 2 本
    if(Get(*L,2,e)){
        printf("\n=== Get 第 2 本 ===\n");
        printf("%d\t%lld\t%s\t%s\t%.2f\n",e.id,e.isbn,e.name,e.author,e.price);
    }

    // 测试 Locate：按 ISBN 查找
    long long target_isbn = 9787111579626;
    int pos = Locate(*L, target_isbn);
    if(pos != 0){
        printf("\n=== Locate ISBN=%lld ===\n", target_isbn);
        Get(*L, pos, e);
        printf("位序：%d，信息：%d\t%lld\t%s\t%s\t%.2f\n",pos,e.id,e.isbn,e.name,e.author,e.price);
    }else{
        printf("\n=== Locate ISBN=%lld ===\n未找到\n", target_isbn);
    }

    // 测试 Insert：在第 2 位插入新图书
    Book newBook={0,9787302334644,"数据结构","严蔚敏",35.00};
    Insert(*L,2,newBook);
    printf("\n=== 插入后列表 ===\n");
    Print(*L);

    // 测试 Delete：删除第 2 本
    Delete(*L,2,e);
    printf("\n=== 删除后列表 ===\n");
    Print(*L);

    // 销毁顺序表
    Destroy(L);
    return 0;
}