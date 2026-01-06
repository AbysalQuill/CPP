#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
int  main(){
    node *head=NULL;
    int n,data;
    printf("链表长度：");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&data);
        node*nextnode=(node*)malloc(sizeof(node));
        nextnode->data=data;
        nextnode->next=head;
        head=nextnode;
    }
    node *p=head;
    while (p!=NULL){
        printf("%d ",p->data);
            p=p->next;
    }
    return 0;
}

