#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *data;
    struct node *next;
} node;
void delete(node **head, int n) {
    for (int i = 0; i < n; i++){
        char data[100];
        scanf("%99s", data);
        node *current=*head,*prev=NULL;
        while (current!=NULL&&current->data==data){
            prev=current;
            current=current->next;
        }
        if (prev==NULL) *head=current->next;
        else prev->next=current->next;
        free(current->data);
        free(current);
    }
}
int main() {
    node *head=NULL;
    int n, m; 
    printf("输入链表长度：");
    scanf("%d", &n);    
    printf("输入数据：");
    for (int i=0;i<n;i++){
        char data[100];
        scanf("%99s", data);
        node *new_node=(node*)malloc(sizeof(node));
        new_node->data=(char*)malloc(strlen(data)+1);
        strcpy(new_node->data,data);
        new_node->next=head;
        head=new_node;
    }
    printf("删除数据个数：");
    scanf("%d",&m);
    delete(&head,m);
    node *current=head;
    printf("剩余数据：\n");
    while (current!=NULL){
        printf("%s\n",current->data);
        current=current->next;
    }
    current=head;
    while (current!=NULL){
        node *temp=current;
        current=current->next;
        free(temp->data);
        free(temp);
    }
    return 0;
}
