#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void insert(node **head, int data) {
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
}

int main() {
    node *head=NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    while (head!=NULL) {
        printf("%d ", head->data);
        head=head->next;
    }
    return 0;
}

