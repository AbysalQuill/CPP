#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head->data="apple";
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    second->data="banana";
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    third->data="orange";
    head->next=second;
    second->next=third;
    third->next=NULL;
    struct Node *current=head;
    while(current!=NULL){
        printf("%s ",current->data);
        current=current->next;
    }
    return 0;
}


