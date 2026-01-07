#include <cstdio>
#include <cstdlib>
#define InitSize 100
typedef int ElemType;
typedef struct SqStack{
	ElemType *data;
	int top;
	int maxsize;
}SqStack;

void InitStack(SqStack &S){
	S.data=(ElemType*)malloc(InitSize*sizeof(ElemType));
    S.top=-1;
    S.maxsize=InitSize;
}

bool StackEmpty(SqStack S){
    return S.top==-1;
}

bool Push(SqStack &S,ElemType e){
	if(S.top==S.maxsize-1){
        printf("栈已满！");
		return false;
    }
	S.data[++S.top]=e;
	return true;
}

bool Pop(SqStack &S,ElemType &e){
	if(S.top==-1){
        printf("栈为空！");
		return false;
    }
	e=S.data[S.top--];//先取值再减
	return true;
}

bool GetTop(SqStack S,ElemType &e){
	if(S.top==-1){
        printf("栈为空！");
		return false;
    }
	e=S.data[S.top];
    printf("%d\n",e);
	return true;
}

void DestroyStack(SqStack &S){
    free(S.data);
    S.top=-1;
}

void PrintStack(SqStack S){
    for(int i=S.top;i>=0;i--){
        printf("%d ",S.data[i]);
    }
    printf("\n");
}

int main(){
    SqStack S;
    InitStack(S);
    Push(S,1);
    Push(S,2);
    Push(S,3);
    ElemType e;
    Pop(S,e);
    printf("%d\n",e);
    GetTop(S,e);
    PrintStack(S);
    return 0;
}

